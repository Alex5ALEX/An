#include "Deleter.h"


void Deleter::del_Pass(vector<Pass>& temp)
{
	int index = 0;
	if (finder.find_Pass(temp, index)) { return; }



	printer.print_Pass(temp[index]);
	print("Do you want delete? (Y/N) :");
	char control = input_char();

	if (control == 'y' || control == 'Y') {
		temp.erase(temp.begin() + index);
		print("Object was deleted");
	}
}

void Deleter::del_Student(vector<Student>& temp)
{
	int index = 0;
	if (finder.find_Student(temp, index)) { return; }
	

	printer.print_Student(temp[index]);
	print("Do you want delete? (Y/N) :");
	char control = input_char();


	if (control == 'y' || control == 'Y') {
		temp.erase(temp.begin() + index);
		print("Object was deleted");
	}
}

void Deleter::del_Group(vector<Group>& temp)
{
	int index = 0;
	if (finder.find_Group(temp, index)) { return; }

	printer.print_Group(temp[index]);
	print("Do you want delete? (Y/N) :");
	char control = input_char();

	if (control == 'y' || control == 'Y') {
		temp.erase(temp.begin() + index);
		print("Object was deleted");
	}
}
