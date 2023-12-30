#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include "Pass.h"
#include "Student.h"
#include "Group.h"

#include "Message.h"
#include "Finder.h"

using namespace std;

class Filler
{
private:
	Finder finder;

private:
	int id_student;
	int id_group;

public:
	Filler();

	//void fill_Pass(vector<Pass>&);
	//void fill_Student(vector<Student>&);
	//void fill_Group(vector<Group>&);


	void input_Pass(vector<Pass>&);
	void input_Student(vector<Student>&);
	void input_Group(vector<Group>&);

	void fill_File_Pass(vector<Pass>&);
	void fill_File_Student(vector<Student>&);
	void fill_File_Group(vector<Group>&);

};

