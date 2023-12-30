#include "Reporter.h"



void Reporter::text_report()
{
	string out;

	out += format("\n{:*^30}\n", "REPORT-MENU") + "\n";

	out += format("{:-^30}\n", "Select Report?") + "\n";
	out += format("{:^5} - {:.20}\n", "1", "Data Report") + "\n";
	out += format("{:^5} - {:.20}\n", "2", "Group Report") + "\n";
	out += format("{:^5} - {:.20}\n", "3", "Student Report") + "\n";

	out += format("{:^5} - {:.20}\n", "Q", "Exit") + "\n";

	out += format("{:*<30}\n", "");

	print(out);
}

void Reporter::report(Data& data)
{
	system("cls");

	char control = 'q';

	bool LOOP = 1;
	while (LOOP) {

		text_report();

		control = input_char();

		switch (control)
		{
		case '1':
			report_data(data);
			break;

		case '2':
			report_Group(data);
			break;

		case '3':
			report_Student(data);
			break;

		case 'Q':
		case 'q':
			LOOP = 0;
			break;

		default:
			break;
		}
	}
}





void Reporter::report_data(Data& data)
{
	system("cls");

	string out;

	out += format("{:_^30}\n", "REPORT");


	out += format("{:<30}\n", "�� ������ ������ � ������� :");
	out += format("{:<20}:{:<10}\n", "���������", data.temp_Student.size());
	out += format("{:<20}:{:<10}\n", "����", data.temp_Group.size());
	out += format("{:<20}:{:<10}\n", "���������", data.temp_Pass.size());

	//STUDENTS
	out += format("{:_^30}\n", "");

	out += format("{:<30}\n", "�������� :");


	for (int i = 0; i < data.temp_Student.size(); i++) {
		out += format("{:<} {:<}\n", data.temp_Student[i].get_Name(), data.temp_Student[i].get_Surname());
	}



	out += format("{:_^30}\n", "");
	//�������

	out += format("{:<30}\n", "������ :");

	for (int i = 0; i < data.temp_Group.size(); i++) {
		out += format("{:<30}\n", data.temp_Group[i].get_Group_Name());
	}

	out += format("{:_^30}\n", "");

	out += "\n\n";
	print(out);
}



void Reporter::report_Group(Data& data)
{
	system("cls");

	string out;

	vector<int> index;


	out += format("{:_^30}\n", "GROUP REPORT");



	for (int i = 0; i < data.temp_Group.size(); i++){
		//����� ������������ 
		index.clear();
		finder.find_Student_in_Group(data.temp_Student, index, data.temp_Group[i].get_ID_Group());
	
		out += format("{:<30}\n", data.temp_Group[i].get_Group_Name());

		out += format("� ������ {:<} ���������\n", index.size());


		for (int j = 0; j < index.size(); j++) {
			out += format("\t> {:<} {:<}\n", data.temp_Student[index[j]].get_Name(), data.temp_Student[index[j]].get_Surname());
		}

	}



	out += format("{:_^30}\n", "");
	out += "\n\n";

	print(out);
}



void Reporter::report_Student(Data& data)
{
	system("cls");

	string out;

	vector<int> index;


	out += format("{:_^30}\n", "Student REPORT");

	for (int i = 0; i < data.temp_Student.size(); i++) {
		//����� ������������ ����� participation
		index.clear();
		finder.find_Pass_in_Student(data.temp_Pass, index, data.temp_Student[i].get_ID_Student());
		

		out += format("{:<} {:<}\n", data.temp_Student[i].get_Name(), data.temp_Student[i].get_Surname());
		out += format("� �������� {:<} ���������\n", index.size());
		

		for (int j = 0; j < index.size(); j++) {
			out += format("\t> {:<10} {:<5}\n", data.temp_Pass[index[j]].get_Date(), data.temp_Pass[index[j]].get_Count());
		}

	}

	out += format("{:_^30}\n", "");
	out += "\n\n";

	print(out);
}
