#include <iostream>

using namespace std;

int main() 
{
    // sizeof() : Returns the size in bytes of 
    //            a variable or data type, class , objects etc.
    double d = 3.14;
    cout << "Size of double: " << sizeof(d) << " bytes" << endl;

    string name="Rushaan";
    cout << "Size of string: " << sizeof(name) << " bytes" << endl;

    // string is a reference datatype 
    // size can be both 24 or 32 bytes depending on compiler

    char grades[]= {'a','b','c'};
    cout << "Size of array: " << sizeof(grades) << " bytes" << endl;

    // char takes up only 1 byte
    //In an array no. of elements can be found by
    // dividing the sizeof array by individual datatype size

    string students[]={"spongebob", "patrick"};
    cout << "Size of array: " << sizeof(students) << " bytes" << endl;

    // size of array is dataype size times no of elements


	return 0;
}
