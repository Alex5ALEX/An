#pragma once
#include <iostream>
#include <vector>
#include <format>

#include "Message.h"


#include "Pass.h"
#include "Student.h"
#include "Group.h"



///
///		PRINT ELEMENT
///
string str_Pass(Group);
string str_Student(Group);
string str_Group(Group);

///
///		PRINT VECTOR
///
string str_Vec_Pass(vector<Pass> &);
string str_Vec_Student(vector<Student> &);
string str_Vec_Group(vector<Group> &);

///
///		ADD ELEMENT
///
void fill_Pass(vector<Pass>&);
void fill_Student(vector<Student>&);
void fill_Group(vector<Group>&);






