#include "Printer.h"


void Printer::print_Pass(Pass& temp) {
	string out;

	out += format("{:*^50}\n", "Pass");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "Count", temp.get_Count());
	out += format("{:<20}|{:<30}\n", "Data", temp.get_Date());
	out += format("{:<20}|{:<30}\n", "Reason", temp.get_Reason());

	out += format("{:*<50}\n", "");

	print(out);
}

void Printer::print_Student(Student& temp) {
	string out;

	out += format("{:*^50}\n", "Student");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Name", temp.get_Name());
	out += format("{:<20}|{:<30}\n", "Surname", temp.get_Surname());

	out += format("{:*<50}\n", "");

	print(out);
}

void Printer::print_Group(Group& temp) {
	string out;

	out += format("{:*^50}\n", "Group");

	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Year", temp.get_Year());
	out += format("{:<20}|{:<30}\n", "Group Name", temp.get_Group_Name());

	out += format("{:*<50}\n", "");

	print(out);
}





///
///		PRINT VECTOR
///
void Printer::print_Vec_Pass(vector<Pass>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		print_Pass(vec[i]);
	}
}

void Printer::print_Vec_Student(vector<Student>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		print_Student(vec[i]);
	}
}

void Printer::print_Vec_Group(vector<Group>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		print_Group(vec[i]);
	}
}





void Printer::print_selected_Pass(vector<Pass>& temp)
{
	int index = 0;
	if (finder.find_Pass(temp, index)) { return; }

	print_Pass(temp[index]);
}

void Printer::print_selected_Student(vector<Student>& temp)
{
	int index = 0;
	if (finder.find_Student(temp, index)) { return; }

	print_Student(temp[index]);
}

void Printer::print_selected_Group(vector<Group>& temp)
{
	int index = 0;
	if (finder.find_Group(temp, index)) { return; }

	print_Group(temp[index]);
}









void Printer::print_File_Pass(vector<Pass>& temp)
{
	ofstream file("data/pass_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		
		out += format("{:<}\n", temp[i].get_ID_Student());
		out += format("{:<}\n", temp[i].get_Count());
		out += format("{:<}\n", temp[i].get_Date());
		out += format("{:<}\n", temp[i].get_Reason());

		file << out;
		out = "";
	}
	file.close();
}

void Printer::print_File_Student(vector<Student>& temp)
{
	ofstream file("data/student_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		out += format("{:<}\n", temp[i].get_ID_Student());
		out += format("{:<}\n", temp[i].get_ID_Group());
		out += format("{:<}\n", temp[i].get_Name());
		out += format("{:<}\n", temp[i].get_Surname());

		file << out;
		out = "";
	}
	file.close();


	//ofstream data_file("data/student/student_data.txt"); // открываем файл для записи
	//data_file.clear();
	//data_file << finder.find_max_id_Student(temp);
	//data_file.close();
}

void Printer::print_File_Group(vector<Group>& temp)
{
	ofstream file("data/group_list.txt"); // открываем файл для записи
	file.clear();
	string out;


	for (int i = 0; i < temp.size(); i++) {

		out += format("{:<}\n", temp[i].get_ID_Group());
		out += format("{:<}\n", temp[i].get_Year());
		out += format("{:<}\n",	temp[i].get_Group_Name());

		file << out;
		out = "";
	}
	file.close();


	//ofstream data_file("data/group/group_data.txt"); // открываем файл для записи
	//data_file.clear();
	//data_file << finder.find_max_id_Group(temp);
	//data_file.close();
}







