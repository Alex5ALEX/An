#pragma once

#include <vector>
#include <string>
#include <format>

#include "Pass.h"
#include "Student.h"
#include "Group.h"

#include "Data.h"

#include "Filler.h"
#include "Printer.h"
#include "Finder.h"
#include "Deleter.h"
#include "Editer.h"
#include "Reporter.h"
#include "Sorter.h"


#include "Message.h"





using namespace std;



class Menu {

private:
	Data data;

private:
	Finder finder;
	Printer printer;
	Filler filler;
	Deleter deleter;
	Editer editer;
	Reporter reporter;
	Sorter sorter;

//********************************************************************
private:
	string text_main_Menu();
	string text_sub_Menu(string);


///		MAIN_MENU
public:
	int main_Menu();


///		SUB_MENU
public:
	int sub_Menu_Pass();
	int sub_Menu_Student();
	int sub_Menu_Group();

};

