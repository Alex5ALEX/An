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

#include "Data.h"

#include "Finder.h"

using namespace std;

class Reporter
{
private:
	Finder finder;

private:
	void text_report();


public:
	void report(Data&);


	void report_data(Data&);
	void report_Group(Data&);
	void report_Student(Data&);

};

