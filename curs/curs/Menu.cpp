#include "Menu.h"



///
///		TEXT MENU
///
string Menu::text_main_Menu() {
	string out;

	out += format("\n{:*^30}\n", "MENU") + "\n";

	out += format("{:^30}\n", "What do you want to do?") + "\n";


	out += format("{:*<30}\n", "");

	out += format("{:^5} - {:20}\n", "1", "Edit Pass");
	out += format("{:^5} - {:20}\n", "2", "Edit Student");
	out += format("{:^5} - {:20}\n", "3", "Edit Group");

	out += format("{:-<30}\n", "");

	out += format("{:^5} - {:20}\n", "4", "Report");
	out += format("{:^5} - {:20}\n", "5", "Save all");
	out += format("{:^5} - {:20}\n", "Q", "Exit");

	out += format("{:*<30}\n", "");

	return out;
}


string Menu::text_sub_Menu(string temp) {
	string out;

	out += format("\n{:*^30}\n", temp + " Menu") + "\n";

	out += format("{:^30}\n", "What do you want to do?") + "\n";

	out += format("{:*<30}\n", "");

	out += format("{:^5} - {:25}\n", "1", "Create " + temp);
	out += format("{:^5} - {:25}\n", "2", "Delete " + temp);
	out += format("{:^5} - {:25}\n", "3", "Edit " + temp);
	out += format("{:^5} - {:25}\n", "4", "Print " + temp);
	out += format("{:^5} - {:25}\n", "5", "Print list of " + temp);


	out += format("{:-<30}\n", "");

	out += format("{:^5} - {:25}\n", "6", "Sort " + temp);
	out += format("{:^5} - {:25}\n", "7", "Save " + temp);
	out += format("{:^5} - {:.20}\n", "Q", "Exit");

	out += format("{:*<30}\n", "");

	return out;
}







///
///		MAIN MENU
///
int Menu::main_Menu() {


	//запись из файла
	filler.fill_File_Pass(data.temp_Pass);
	filler.fill_File_Student(data.temp_Student);
	filler.fill_File_Group(data.temp_Group);


	bool LOOP = 1;

	char controller = 'q';

	while (LOOP) {
		print(text_main_Menu());

		controller = input_char();

		system("cls");

		switch (controller)
		{
		case '1':
			sub_Menu_Pass();
			break;

		case '2':
			sub_Menu_Student();
			break;

		case '3':
			sub_Menu_Group();
			break;

		case '4':
			reporter.report(data);
			break;

		case '5':
			printer.print_File_Pass(data.temp_Pass);
			printer.print_File_Student(data.temp_Student);
			printer.print_File_Group(data.temp_Group);

			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}
	}

	return 0;
}





///
///		SUB MENU
///
int Menu::sub_Menu_Pass()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Pass"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Pass(data.temp_Pass);
			break;

			//Delete 
		case '2':
			deleter.del_Pass(data.temp_Pass);
			break;

			//Edit
		case '3':
			editer.edit_Pass(data.temp_Pass);
			break;

			//Print
		case '4':
			printer.print_selected_Pass(data.temp_Pass);
			break;

			//Print list
		case '5':
			printer.print_Vec_Pass(data.temp_Pass);
			break;

		case '6'://sort
			sorter.sort_Pass(data.temp_Pass);
			break;

		case '7'://Save
			printer.print_File_Pass(data.temp_Pass);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}


int Menu::sub_Menu_Student()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Student"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Student(data.temp_Student);
			break;

			//Delete 
		case '2':
			deleter.del_Student(data.temp_Student);
			break;

			//Edit
		case '3':
			editer.edit_Student(data.temp_Student);
			break;

			//Print
		case '4':
			printer.print_selected_Student(data.temp_Student);
			break;

			//Print list
		case '5':
			printer.print_Vec_Student(data.temp_Student);
			break;

		case '6'://Sort
			sorter.sort_Student(data.temp_Student);
			break;

		case '7'://Save
			printer.print_File_Student(data.temp_Student);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}


int Menu::sub_Menu_Group()
{
	bool LOOP = 1;
	char controller = 'q';


	while (LOOP)
	{
		print(text_sub_Menu("Group"));

		controller = input_char();

		system("cls");

		switch (controller)
		{
			//create
		case '1':
			filler.input_Group(data.temp_Group);
			break;

			//Delete 
		case '2':
			deleter.del_Group(data.temp_Group);
			break;

			//Edit
		case '3':
			editer.edit_Group(data.temp_Group);
			break;

			//Print
		case '4':
			printer.print_selected_Group(data.temp_Group);
			break;

			//Print list
		case '5':
			printer.print_Vec_Group(data.temp_Group);
			break;

		case '6'://Sort
			sorter.sort_Group(data.temp_Group);
			break;

		case '7'://Save
			printer.print_File_Group(data.temp_Group);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			cout << "ERROR" << endl;
			break;
		}


	}

	return 0;
}