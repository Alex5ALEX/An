#include "Pass.h"




Pass::Pass() : Pass::Pass(0,0,"","") {}

Pass::Pass(int ID_Student, int Count, string Date, string Reason){
	this->ID_Student = ID_Student;
	this->Count = Count;
	this->Date = Date;
	this->Reason = Reason;
}



void Pass::set_ID_Student(int ID_Student) {
	this->ID_Student = ID_Student;
}

void Pass::set_Count(int Count) {
	this->Count = Count;
}

void Pass::set_Date(string Date) {
	this->Date = Date;
}

void Pass::set_Reason(string Reason) {
	this->Reason = Reason;
}



int Pass::get_ID_Student() {
	return ID_Student;
}

int	Pass::get_Count() {
	return Count;
}

string Pass::get_Date() {
	return Date;
}

string Pass::get_Reason() {
	return Reason;
}

