#include "Message.h"


void print(string temp) {
	cout << temp;
}

char input_char() {
	char out = ' ';
	cin >> out;
	return out;
}



bool input_int(int& temp) {
	string str;

	input_string(str);

	return handle_int(str, temp);
}



bool handle_int(string& str, int& out) {

	cmatch result;
	regex regular("([0-9]*)");


	if (regex_match(str.c_str(), result, regular)) {
		out = stoi(result[0]);
		return 0;
	}
	else {
		print("ERROR\n");
		return 1;
	}
}





bool input_date(string& date) {
	string str;
	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");

	print("Input date in format \"DD.MM.YYYY\" :");

	input_string(str);


	if (regex_match(str.c_str(), result, regular)) {
		date = str;
		return 0;
	}
	else {
		print("ERROR\n");
		return 1;
	}
}



bool handle_date(string& str, int& d, int& m, int& y) {
	cmatch result;
	regex regular("([0-9]{1,2})(.)([0-9]{1,2})(.)([0-9]{4})");



	if (regex_match(str.c_str(), result, regular)) {
		d = stoi(result[1]);
		m = stoi(result[3]);
		y = stoi(result[5]);
		return 0;
	}

	print("An date was expected");
	return 1;
}





bool input_year(string& out) {
	
	string str;
	cmatch result;
	regex regular("([0-9]{4})");


	print("Input year in format \"YYYY\" :");
	input_string(str);


	if (regex_match(str.c_str(), result, regular)) {
		out = str;
		return 0;
	}
	else{
		cout << "ERROR" << endl;
		return 1;
	}

	
}

bool handle_year(string& str, int& out)
{
	cmatch result;
	regex regular("([0-9]{4})");

	if (regex_match(str.c_str(), result, regular)) {
		out = stoi(str);
		return 0;
	}
	else {
		cout << "ERROR" << endl;
		return 1;
	}
}




bool input_str(string& str) {
	cin >> str;
	return 1;
}


bool input_string(string& out) {
	string a,b;

	cin >> a;
	getline(cin, b);

	out += a+b;

	return 1;
}