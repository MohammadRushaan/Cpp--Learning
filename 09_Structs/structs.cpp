#include <iostream>

using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled;

    // You can assign default values of members here
};

int main()
{
    //Struct : A structure that groups related variables under one name
    //         structs can contain many diff data types
    //          variables in a stuct are known as "members"
    //          members can be accessed with, class member access operator .

    student student1;

    student1.name="Rushaan";
    student1.gpa= 3.5;
    student1.enrolled = true;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl; // 1 true 0 false

    student student2;

    student2.name="Bob";
    student2.gpa= 3.4;
    student2.enrolled = false;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl; // 1 true 0 false

    return 0;
}