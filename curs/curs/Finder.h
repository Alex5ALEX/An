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

class Finder
{
private:
	///		PRINT ELEMENT
	void print_Pass(Pass&);
	void print_Student(Student&);
	void print_Group(Group&);


private:
	void text_find_Pass();
	void text_find_Student();
	void text_find_Group();


public:
	// MAIN FIND
	int find_Pass(vector<Pass>, int&);
	int find_Student(vector<Student>, int&);
	int find_Group(vector<Group>, int&);

	//PASS
	int find_id_Pass(vector<Pass>&, int&);
	int find_Count_Pass(vector<Pass>&, int&);
	int find_Date_Pass(vector<Pass>&, int&);
	int find_Reason_Pass(vector<Pass>&, int&);


	//STUDENT
	int find_Id_Student(vector<Student>, int&);
	int find_Group_Student(vector<Student>, int&);
	int find_Name_Student(vector<Student>, int&);
	int find_Surname_Student(vector<Student>, int&);



	//GROUP
	int find_ID_Group(vector<Group>, int&);
	int find_Year_Group(vector<Group>, int&);
	int find_Name_Group(vector<Group>, int&);



	//use in files
	int find_max_id_Student(vector<Student>&);
	int find_max_id_Group(vector<Group>&);


	int find_Student_in_Group(vector<Student>, vector<int>&, int);
	int find_Pass_in_Student(vector<Pass>, vector<int>&, int);


	bool find_all_index_Pass(vector<Pass>&, int&, vector<int>&);
};

