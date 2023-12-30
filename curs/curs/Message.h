#pragma once
#include <string>
#include <iostream>
#include <regex>

using namespace std;

void print(string);

char input_char();



bool input_int(int&);

bool handle_int(string&, int&);



bool input_date(string&);

bool handle_date(string&, int&, int&, int&);

bool input_year(string&);

bool handle_year(string&, int&);



bool input_str(string&);

bool input_string(string&);