#pragma once
#include <string>
#include <format>

using namespace std;

class Pass
{
private:
	int		ID_Student;
	int		Count;
	string	Data;
	string	Reason;


public:
	Pass();
	Pass(int, int, string, string);



public:
	void set_ID_Student(int);
	void set_Count(int);
	void set_Data(string);
	void set_Reason(string);


	int		get_ID_Student();
	int		get_Count();
	string	get_Data();
	string	get_Reason();





};

