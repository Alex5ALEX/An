#include <iostream>
#include <vector>

#include "Pass.h"
#include "Student.h"
#include "Group.h"

#include "Message.h"
#include "Functions.h"

using namespace std;

int main()
{

    vector<Pass> temp_Pass{ 3 };
    vector<Student> temp_Student{ 3 };
    vector<Group> temp_Group{ 3 };

    print(str_Vec_Pass(temp_Pass));
    /*print(str_Vec_Student(temp_Student));
    print(str_Vec_Group(temp_Group));*/

    fill_Pass(temp_Pass);

    print(str_Vec_Pass(temp_Pass));





    return 0;
}