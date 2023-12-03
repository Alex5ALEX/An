#include "Group.h"


Group::Group():Group::Group(0,0,"") {}

Group::Group(int ID_Group, int Year, string Group_Name) {
	this->ID_Group = ID_Group;
	this->Year = Year;
	this->Group_Name = Group_Name;
}



void Group::set_ID_Group(int ID_Group) {
	this->ID_Group = ID_Group;
}

void Group::set_Year(int) {
	this->Year = Year;
}

void Group::set_Group_Name(string) {
	this->Group_Name = Group_Name;
}


int	Group::get_ID_Group() {
	return ID_Group;
}

int	Group::get_Year() {
	return Year;
}

string	Group::get_Group_Name() {
	return Group_Name;
}


