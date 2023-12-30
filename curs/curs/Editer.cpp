#include "Editer.h"







void Editer::text_edit_Pass()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID Student") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Count") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Date") + "\n";
	out += format("{:^5} - {:.20}\n", "4", "Reason") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}



void Editer::text_edit_Student()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "ID Group") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Name") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Surname") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}




void Editer::text_edit_Group()
{
	string out;

	out += format("\n{:*<30}\n", "") + "\n";
	out += format("{:-^30}\n", "What do you want to edit?") + "\n";

	out += format("{:^5} - {:.20}\n", "1", "Year") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Group Name") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}






void Editer::edit_Pass(vector<Pass>& temp)
{
	int index = 0;
	if (finder.find_Pass(temp, index)) { return; }




	bool LOOP = 1;
	char controller = 'q';
	
	string stemp;
	int itemp;
	
	while (LOOP)
	{
		system("cls");
	
		printer.print_Pass(temp[index]);
		text_edit_Pass();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input ID Student:");
			if (input_int(itemp)) {break;}
			temp[index].set_ID_Student(itemp);
			break;
	
	
		case '2':
			print("Input Count:");
			if (input_int(itemp)) {break;}
			temp[index].set_Count(itemp);
			break;
	
	
		case '3':
			if (input_date(stemp)) {break;}
			temp[index].set_Date(stemp);
			break;
	
	
		case '4':
			print("Input Reason:");
			if (input_string(stemp)) {
				temp[index].set_Reason(stemp);
			}
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
}





void Editer::edit_Student(vector<Student>& temp)
{
	int index = 0;
	if (finder.find_Student(temp, index)) { return; }




	bool LOOP = 1;
	char controller = 'q';
	
	string stemp;
	int itemp;
	
	while (LOOP)
	{
		system("cls");
	
		printer.print_Student(temp[index]);
		text_edit_Student();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input ID Group:");
			if (input_int(itemp)) {break;	}
			temp[index].set_ID_Group(itemp);
			break;
	
	
		case '2':
			print("Input Name:");
			if (input_str(stemp)) {
				temp[index].set_Name(stemp);
			}
			break;
	
	
		case '3':
			print("Input SurName:");
			if (input_str(stemp)) {
				temp[index].set_Surname(stemp);
			}
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


}





void Editer::edit_Group(vector<Group>& temp)
{
	int index = 0;
	if (finder.find_Group(temp, index)) { return; }




	bool LOOP = 1;
	char controller = 'q';
	
	string stemp;
	
	while (LOOP)
	{
		system("cls");
	
		printer.print_Group(temp[index]);
		text_edit_Group();
	
	
		controller = input_char();
	
	
		switch (controller)
		{
		case '1':
			print("Input Year:");
			if (input_year(stemp)) {
				break;
			}
			temp[index].set_Group_Name(stemp);
			break;
	
	
		case '2':
			print("Input Group name:");
			if (input_str(stemp)) {
				temp[index].set_Group_Name(stemp);
			}
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
}
