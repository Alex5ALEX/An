#include "Finder.h"


void Finder::print_Pass(Pass& temp) {
	string out;

	out += format("{:*^50}\n", "Pass");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "Count", temp.get_Count());
	out += format("{:<20}|{:<30}\n", "Data", temp.get_Date());
	out += format("{:<20}|{:<30}\n", "Reason", temp.get_Reason());

	out += format("{:*<50}\n", "");

	print(out);
}

void Finder::print_Student(Student& temp) {
	string out;

	out += format("{:*^50}\n", "Student");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Name", temp.get_Name());
	out += format("{:<20}|{:<30}\n", "Surname", temp.get_Surname());

	out += format("{:*<50}\n", "");

	print(out);
}

void Finder::print_Group(Group& temp) {
	string out;

	out += format("{:*^50}\n", "Group");

	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Year", temp.get_Year());
	out += format("{:<20}|{:<30}\n", "Group Name", temp.get_Group_Name());

	out += format("{:*<50}\n", "");

	print(out);
}








void Finder::text_find_Pass()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Pass");

	out += format("{:^5} - {:25}\n", "1", "Id_Student"); //множеств поиск
	out += format("{:^5} - {:25}\n", "2", "Count"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Date"); //множеств поиск
	out += format("{:^5} - {:25}\n", "4", "Reason");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);

}

void Finder::text_find_Student()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Student");

	out += format("{:^5} - {:25}\n", "1", "Id_Student");
	out += format("{:^5} - {:25}\n", "2", "ID_Group"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Name");
	out += format("{:^5} - {:25}\n", "4", "Surname");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}

void Finder::text_find_Group()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a search option Group");

	out += format("{:^5} - {:25}\n", "1", "ID_Group");
	out += format("{:^5} - {:25}\n", "2", "Year"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Group_Name");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);


}




int Finder::find_Pass(vector<Pass> temp, int& out)
{
	text_find_Pass();

	char control = input_char();

	switch (control)
	{
	case'1'://Id_Student
		 return find_id_Pass(temp,out);
		break;

	case'2'://Count
		return find_Count_Pass(temp, out);
		break;

	case'3'://Date
		return find_Date_Pass(temp, out);
		break;

	case'4'://Reason
		return find_Reason_Pass(temp, out);
		break;

	default:
		return 1;
		break;
	}

	return 0;
}



int Finder::find_Student(vector<Student> temp, int& out)
{
	text_find_Student();

	char control = input_char();

	switch (control)
	{
	case'1'://Id_Student
		return find_Id_Student(temp, out);
		break;

	case'2'://ID_Group
		return find_Group_Student(temp, out);
		break;

	case'3'://Name
		return find_Name_Student(temp, out);
		break;

	case'4'://Surname
		return find_Surname_Student(temp, out);
		break;

	default:
		return 1;
		break;
	}





	return 1;
}



int Finder::find_Group(vector<Group> temp, int& out)
{
	text_find_Group();

	char control = input_char();

	switch (control)
	{
	case'1'://ID_Group
		return find_ID_Group(temp, out);
		break;

	case'2'://Year
		return find_Year_Group(temp, out);
		break;

	case'3'://Group_Name
		return find_Name_Group(temp, out);
		break;

	default:
		return 1;
		break;
	}





	return 1;
}







///
///		PASS
///

int Finder::find_id_Pass(vector<Pass>& temp, int& out)
{
	int id = 0;
	vector<int> index;

	print("Input id Student :");
	if (input_int(id)) { return 1; }

	//поиск индексов в векторе
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Student() == id) {
			index.push_back(i);
		}
	}
	
	//Проверка на наличие элементов
	if (index.size() == 0) {
		print("Object not found");
		return 1;
	}
	

	//Выбор элемента пользователем
	for (int i = 0; i < index.size(); i++) {
		print(format("\n{:<})\n", i));
		print_Pass(temp[index[i]]);
	}

	print("Input number you element : ");
	int num = 0;
	if (input_int(num)) { return 1; }

	out = index[num]; 
	return 0;
}

int Finder::find_Count_Pass(vector<Pass>& temp, int& out)
{
	int count = 0;
	print("Input count : ");
	if (input_int(count)) { return 1; }

	auto result = find_if(temp.begin(), temp.end(), [count](Pass& iter)
		{
			return iter.get_Count() == count;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Date_Pass(vector<Pass>& temp, int& out)
{
	string Date;
	if (input_date(Date)) { return 1; }

	
	auto result = find_if(temp.begin(), temp.end(), [Date](Pass& iter)
		{
			return iter.get_Date() == Date;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Reason_Pass(vector<Pass>& temp, int& out)
{
	string Reason ;
	print("Input reason : ");
	input_str(Reason);


	auto result = find_if(temp.begin(), temp.end(), [Reason](Pass& iter)
		{
			return iter.get_Reason() == Reason;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}




///
///		STUDENT
///


int Finder::find_Id_Student(vector<Student> temp, int& out)
{
	int id = 0;
	print("Input id student : ");
	if (input_int(id)) { return 1; }

	auto result = find_if(temp.begin(), temp.end(), [id](Student& iter)
		{
			return iter.get_ID_Student() == id;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Group_Student(vector<Student> temp, int& out)//снож поиск
{
	int id = 0;
	vector<int> index;

	print("Input id Group :");
	if (input_int(id)) { return 1; }

	//поиск индексов в векторе
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Group() == id) {
			index.push_back(i);
		}
	}

	//Проверка на наличие элементов
	if (index.size() == 0) {
		print("Object not found");
		return 1;
	}


	//Выбор элемента пользователем
	for (int i = 0; i < index.size(); i++) {
		print(format("\n{:<})\n", i));
		print_Student(temp[index[i]]);
	}

	print("Input number you element : ");
	int num = 0;
	if (input_int(num)) { return 1; }

	out = index[num];
	return 0;
}

int Finder::find_Name_Student(vector<Student> temp, int& out)
{
	string Name;
	print("Input Name : ");
	input_str(Name);


	auto result = find_if(temp.begin(), temp.end(), [Name](Student& iter)
		{
			return iter.get_Name() == Name;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Surname_Student(vector<Student> temp, int& out)
{
	string Surname;
	print("Input Surname : ");
	input_str(Surname);


	auto result = find_if(temp.begin(), temp.end(), [Surname](Student& iter)
		{
			return iter.get_Surname() == Surname;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}





///
///		GROUP
///

int Finder::find_ID_Group(vector<Group> temp, int& out)
{
	int id = 0;
	print("Input id group : ");
	if (input_int(id)) { return 1; }

	auto result = find_if(temp.begin(), temp.end(), [id](Group& iter)
		{
			return iter.get_ID_Group() == id;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Year_Group(vector<Group> temp, int& out)
{
	string Year;

	if (input_year(Year)) { return 1; }

	auto result = find_if(temp.begin(), temp.end(), [Year](Group& iter)
		{
			return iter.get_Year() == Year;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}

int Finder::find_Name_Group(vector<Group> temp, int& out)
{
	string Name;
	print("Input Name Group : ");
	input_str(Name);


	auto result = find_if(temp.begin(), temp.end(), [Name](Group& iter)
		{
			return iter.get_Group_Name() == Name;
		});


	if (result != temp.end()) {
		out = (result - temp.begin()); //Присваиваем индекс в векторе
		return 0;
	}
	return 1;
}







///
///		FOR FILES
///

int Finder::find_max_id_Student(vector<Student>& temp)
{
	int out = 0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Student() > out) {
			out = temp[i].get_ID_Student();
		}
	}

	return out;
}

int Finder::find_max_id_Group(vector<Group>& temp)
{
	int out = 0;

	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Group() > out) {
			out = temp[i].get_ID_Group();
		}
	}

	return out;
}




//	FOR REPORT

int Finder::find_Student_in_Group(vector<Student> temp, vector<int>& index, int id)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Group() == id) {
			index.push_back(i);
		}
	}

	return 0;
}


int Finder::find_Pass_in_Student(vector<Pass> temp, vector<int>& index, int id)
{
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Student() == id) {
			index.push_back(i);
		}
	}

	return 0;
}






bool Finder::find_all_index_Pass(vector<Pass>& temp, int& id, vector<int>& vec) {


	for (int i = 0; i < temp.size(); i++) {
		if (temp[i].get_ID_Student() == id) {
			vec.push_back(i);
		}
	}


	if (vec.size() == 0) {
		return 1;
	}
	return 0;
}