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

using namespace std;

class Deleter
{
private:
	Printer printer;
	Finder finder;

public:
	void del_Pass(vector<Pass>&);
	void del_Student(vector<Student>&);
	void del_Group(vector<Group>&);
};

