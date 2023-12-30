#include "Sorter.h"

void Sorter::text_sort_Pass()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Pass");

	out += format("{:^5} - {:25}\n", "1", "Id_Student"); //множеств поиск
	out += format("{:^5} - {:25}\n", "2", "Count"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Date"); //множеств поиск
	out += format("{:^5} - {:25}\n", "4", "Reason");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}

void Sorter::text_sort_Student()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Student");

	out += format("{:^5} - {:25}\n", "1", "Id_Student");
	out += format("{:^5} - {:25}\n", "2", "ID_Group"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Name");
	out += format("{:^5} - {:25}\n", "4", "Surname");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}

void Sorter::text_sort_Group()
{
	string out;

	out += format("{:*<30}\n", "") + "\n";
	out += format("{:^30}\n", "Select a sort option Group");

	out += format("{:^5} - {:25}\n", "1", "ID_Group");
	out += format("{:^5} - {:25}\n", "2", "Year"); //множеств поиск
	out += format("{:^5} - {:25}\n", "3", "Group_Name");

	out += format("{:^5} - {:25}\n", "Q", "Exit");
	out += format("{:*<30}\n", "");

	print(out);
}









void Sorter::sort_Pass(vector<Pass>& temp)
{
	text_sort_Pass();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Pass& a, Pass& b) {return a.get_ID_Student() < b.get_ID_Student(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Pass& a, Pass& b) {return a.get_Count() < b.get_Count(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Pass& a, Pass& b) {
			int d, m, y;
			int d1, m1, y1;
			string s = a.get_Date();
			string s1 = b.get_Date();

			handle_date(s, d, m, y);
			handle_date(s1, d1, m1, y1);


			if (y < y1) {
				return 1;
			}
			else if (y > y1) {
				return 0;
			}

			else if (m < m1) {
				return 1;
			}
			else if (m > m1) {
				return 0;
			}

			else if (d < d1) {
				return 1;
			}
			else if (d > d1) {
				return 0;
			}
			return 0;
			});
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Pass& a, Pass& b) {return a.get_Reason() < b.get_Reason(); });
		break;

	default:
		break;
	}
}

void Sorter::sort_Student(vector<Student>& temp)
{
	text_sort_Student();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Student& a, Student& b) {return a.get_ID_Student() < b.get_ID_Student(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Student& a, Student& b) {return a.get_ID_Group() < b.get_ID_Group(); });
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Student& a, Student& b) {return a.get_Name() < b.get_Name(); });
		break;

	case '4':
		sort(temp.begin(), temp.end(), [](Student& a, Student& b) {return a.get_Surname() < b.get_Surname(); });
		break;

	default:
		break;
	}

}

void Sorter::sort_Group(vector<Group>& temp)
{
	text_sort_Group();

	char control = input_char();


	switch (control)
	{
	case '1':
		sort(temp.begin(), temp.end(), [](Group& a, Group& b) {return a.get_ID_Group() < b.get_ID_Group(); });
		break;

	case '2':
		sort(temp.begin(), temp.end(), [](Group& a, Group& b) {
			int y, y1;
			string s = a.get_Year();
			string s1 = b.get_Year();

			handle_year(s, y);
			handle_year(s1, y1);

			if (y < y1) {
				return 1;
			}
			return 0;
			});
		break;

	case '3':
		sort(temp.begin(), temp.end(), [](Group& a, Group& b) {return a.get_Group_Name() < b.get_Group_Name(); });
		break;

	default:
		break;
	}
}
