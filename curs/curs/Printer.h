#pragma once
#include <iostream>
#include <vector>
#include <format>
#include <string>
#include <fstream>

#include "Message.h"


#include "Pass.h"
#include "Student.h"
#include "Group.h"


#include "Finder.h"

using namespace std;


class Printer
{
private:
	Finder finder;

public:
	///		PRINT ELEMENT
	void print_Pass(Pass&);
	void print_Student(Student&);
	void print_Group(Group&);


	///		PRINT VECTOR
	void print_Vec_Pass(vector<Pass>&);
	void print_Vec_Student(vector<Student>&);
	void print_Vec_Group(vector<Group>&);


	///PRINT SELECTED ELEMENT
	void print_selected_Pass(vector<Pass>&);
	void print_selected_Student(vector<Student>&);
	void print_selected_Group(vector<Group>&);


	///		PRINT IN FILE
	void print_File_Pass(vector<Pass>&);
	void print_File_Student(vector<Student>&);
	void print_File_Group(vector<Group>&);

};

