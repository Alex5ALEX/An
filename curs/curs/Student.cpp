#include "Student.h"


Student::Student():Student::Student(0,0,"","") {}

Student::Student(int ID_Student, int ID_Group, string Name, string Surname) {
	this->ID_Student = ID_Student;
	this->ID_Group = ID_Group;
	this->Name = Name;
	this->Surname = Surname;
}



void Student::set_ID_Student(int ID_Student) {
	this->ID_Student = ID_Student;
}

void Student::set_ID_Group(int ID_Group) {
	this->ID_Group = ID_Group;
}

void Student::set_Name(string Name) {
	this->Name = Name;
}

void Student::set_Surname(string Surname) {
	this->Surname = Surname;
}



int	Student::get_ID_Student() {
	return ID_Student;
}

int	Student::get_ID_Group() {
	return ID_Group;
}

string Student::get_Name() {
	return Name;
}

string Student::get_Surname() {
	return Surname;
}


