#pragma once
#include <string>
#include <format>

using namespace std;

class Group
{
private:
	int		ID_Group;
	string	Year;
	string	Group_Name;


public:
	Group();
	Group(int, string, string);


public:
	void set_ID_Group(int);
	void set_Year(string);
	void set_Group_Name(string);


	int		get_ID_Group();
	string 	get_Year();
	string	get_Group_Name();
};

