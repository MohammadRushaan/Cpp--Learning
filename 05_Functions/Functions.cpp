#include <iostream>

using namespace std;

void emptyFunc();

void HappyBirthday()
{
    cout<< " Happy Birthday to \n";

}
void HappyBirthday2(string name2, int age)
{
    // parameter datatype needs to be defined and same as sending datatype
    // multiple parameters of diff datatype can be passed
    cout<< " Happy Birthday to "<< name2 << "\n";
    cout<< " You are :"<< age << " years old \n";

}

int main()// main is a function
{
    //function : a block of reusable code

    HappyBirthday();
    // function calling 
    // functions must be declared before the main function
    // compiler starts with main fucntion
    // you can declare the function before the main with return type
    // and then write it below main else before main

    string name=" Rushaan";
    int age =19;
    // this variable has its scope limited to main only

    // fucntions can only know stuff within them 
    // to pass cross fucntion variables 
    // we need to pass parameters/arguments
    // receving func needs matching parameter datatype

    HappyBirthday2(name,age);
    emptyFunc();


    return 0;
}

void emptyFunc()
{
    // it was declared befoe main hence already existed before main
    // compiler follows top down approach
    cout << " this function is empty\n";
}