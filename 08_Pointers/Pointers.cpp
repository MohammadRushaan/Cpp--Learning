#include <iostream>

using namespace std;

int main()
{
    // pointers = variable that store the memory address of another variable
    //            sometimes its easier to work with addresses

    // & address-of operator
    // * dereference operator

    string name=" Rushaan";
    int age =19;
    string food[3]={"Pizza", "Pasta", "PutItInABox"};

    string *pName = &name;
    int *pAge = &age;
    string *pFood  = food;
    //arrays are already addresses so need for address of operator

    cout << pName;
    cout << *pName << endl;

    cout << pAge;
    cout << *pAge << endl;

    cout << food << endl; // memmory address
    cout << pFood << endl; // memory address
    cout << *pFood << endl; // first index

    

    return 0;
}