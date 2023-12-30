#include "Filler.h"

Filler::Filler() {
	id_student = 1;
	id_group = 1;
}



void Filler::input_Pass(vector<Pass>& temp)
{
	int		ID_Student = 0;
	int		Count = 0;
	string	Date;
	string	Reason;
	
	
	print("Input data of Pass \n");
	
	
	print("Input Id studdent: ");
	input_int(ID_Student);
	
	print("Input count: ");
	input_int(Count);
	
	input_date(Date);
	
	print("Input reason: ");
	input_string(Reason);


	temp.push_back(Pass(ID_Student, Count, Date, Reason));
}

void Filler::input_Student(vector<Student>& temp)
{
	int		ID_Group = 0;
	string	Name;
	string	Surname;
	
	print("Input data of Student \n");
	
	
	print("Input Id group: ");
	input_int(ID_Group);
	
	
	print("Input Name: ");
	input_string(Name);
	
	
	print("Input Surname: ");
	input_string(Surname);

	temp.push_back(Student(id_student, ID_Group, Name, Surname));
	id_student++;
}

void Filler::input_Group(vector<Group>& temp)
{
	string 	Year;
	string	Group_Name;
	
	print("Input data of Group \n");
	
	input_year(Year);
	
	
	print("Input group-name: ");
	input_str(Group_Name);
	


	temp.push_back(Group(id_group, Year, Group_Name));
	id_group++;
}




void Filler::fill_File_Pass(vector<Pass>& temp)
{
	ifstream file("data/pass_list.txt"); // открываем файл для записи

	string stemp;

	int	ID_Student = 0;
	int	Count = 0;
	string	Date;
	string	Reason;


	while (getline(file, stemp))
	{
		handle_int(stemp, ID_Student);

		getline(file, stemp);
		handle_int(stemp, Count);

		getline(file, Date);
		getline(file, Reason);
		
		temp.push_back(Pass(ID_Student, Count, Date, Reason));
	}


	file.close();
}





void Filler::fill_File_Student(vector<Student>& temp)
{
	ifstream file("data/student_list.txt"); // открываем файл для записи

	string	id;

	int		ID_Student = 0;
	int		ID_Group = 0;

	string	Name;
	string	Surname;



	while (getline(file, id))
	{
		handle_int(id, ID_Student);

		getline(file, id);
		handle_int(id, ID_Group);

		getline(file, Name);
		getline(file, Surname);
		temp.push_back(Student(ID_Student, ID_Group, Name, Surname));
	}


	file.close();


	id_student = finder.find_max_id_Student(temp);
	id_student++;
}




void Filler::fill_File_Group(vector<Group>& temp)
{
	ifstream file("data/group_list.txt"); // открываем файл для записи

	string id;
	int		ID_Group;
	string	Year;
	string	Group_Name;



	while (getline(file, id))
	{
		handle_int(id, ID_Group);

		getline(file, Year);
		getline(file, Group_Name);

		temp.push_back(Group(ID_Group, Year, Group_Name));
	}


	file.close();


	id_group = finder.find_max_id_Group(temp);
	id_group++;
}
