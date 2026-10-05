#include <iostream>

using namespace std;

int main()
{
    // memory address: a location in memory where data is stored
    // can be accessed with &( address-of operator)

    string name =" Rushaan";
    int age = 19;
    bool student = true;

    // to display address put & before variable 

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;

    
    return 0;
}