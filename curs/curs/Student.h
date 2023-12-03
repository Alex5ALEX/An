#pragma once
#include <string>
#include <format>

using namespace std;

class Student
{
private:
	int		ID_Student;
	int		ID_Group;
	string	Name;
	string	Surname;


public:
	Student();
	Student(int, int, string, string);


public:
	void set_ID_Student(int);
	void set_ID_Group(int);
	void set_Name(string);
	void set_Surname(string);


	int		get_ID_Student();
	int		get_ID_Group();
	string	get_Name();
	string	get_Surname();



};

