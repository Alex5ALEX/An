#pragma once
#include <string>
#include <format>

using namespace std;

class Group
{
private:
	int		ID_Group;
	int 	Year;
	string	Group_Name;


public:
	Group();
	Group(int, int, string);


public:
	void set_ID_Group(int);
	void set_Year(int);
	void set_Group_Name(string);


	int		get_ID_Group();
	int 	get_Year();
	string	get_Group_Name();
};

