#include "Functions.h"


string str_Pass(Pass temp) {
	string out;

	out += format("{:*<50}\n", "");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "Count", temp.get_Count());
	out += format("{:<20}|{:<30}\n", "Data", temp.get_Data());
	out += format("{:<20}|{:<30}\n", "Reason", temp.get_Reason());

	out += format("{:*<50}\n", "");

	return out;
}

string str_Student(Student temp) {
	string out;

	out += format("{:*<50}\n", "");

	out += format("{:<20}|{:<30}\n", "ID_Student", temp.get_ID_Student());
	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Name", temp.get_Name());
	out += format("{:<20}|{:<30}\n", "Surname", temp.get_Surname());

	out += format("{:*<50}\n", "");

	return out;
}

string str_Group(Group temp) {
	string out;

	out += format("{:*<50}\n", "");

	out += format("{:<20}|{:<30}\n", "ID_Group", temp.get_ID_Group());
	out += format("{:<20}|{:<30}\n", "Year", temp.get_Year());
	out += format("{:<20}|{:<30}\n", "Group Name", temp.get_Group_Name());

	out += format("{:*<50}\n", "");

	return out;
}


///
///		PRINT VECTOR
///
string str_Vec_Pass(vector<Pass>& vec) {
	string out;

	for (int i = 0; i < vec.size(); i++) {
		out += str_Pass(vec[i]);
	}

	return out;
}

string str_Vec_Student(vector<Student>& vec) {
	string out;
	
	for (int i = 0; i < vec.size(); i++) {
		out += str_Student(vec[i]);
	}

	return out;
}

string str_Vec_Group(vector<Group>& vec) {
	string out;
	
	for (int i = 0; i < vec.size(); i++) {
		out += str_Group(vec[i]);
	}

	return out;
}



void fill_Pass(vector<Pass>& temp) {
	temp.push_back(Pass());
}

void fill_Student(vector<Student>& temp) {
	temp.push_back(Student());
}

void fill_Group(vector<Group>& temp) {
	temp.push_back(Group());
}