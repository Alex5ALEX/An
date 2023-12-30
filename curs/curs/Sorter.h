#pragma once
#include <iostream>
#include <vector>
#include <format>
#include <string>
#include <algorithm>

#include "Message.h"


#include "Pass.h"
#include "Student.h"
#include "Group.h"



using namespace std;


class Sorter
{
private:
	void text_sort_Pass();
	void text_sort_Student();
	void text_sort_Group();


public:
	void sort_Pass(vector<Pass>&);
	void sort_Student(vector<Student>&);
	void sort_Group(vector<Group>&);


};

