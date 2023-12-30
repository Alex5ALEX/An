#pragma once
#include <iostream>
#include <vector>
#include <format>
#include <string>

#include "Message.h"

#include "Pass.h"
#include "Student.h"
#include "Group.h"

#include "Finder.h"
#include "Printer.h"
#include "Finder.h"


using namespace std;

class Editer
{
private:
	Printer printer;
	Finder finder;

private:
	void text_edit_Pass();
	void text_edit_Student();
	void text_edit_Group();

public:
	void edit_Pass(vector<Pass>&);
	void edit_Student(vector<Student>&);
	void edit_Group(vector<Group>&);






};

