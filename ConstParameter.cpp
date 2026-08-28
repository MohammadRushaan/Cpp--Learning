#include <iostream>

using namespace std;

void printinfo(const string name ,const int age)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    //const parameter : parameter that is effectively read only, cannot be changed
    //                  code is more secure and conveys intent
    //                  useful for references and pointers
    //                  precede parameters with const

    string name ="Rushaan";
    int age =19;

    printinfo(name,age);

    return 0;
}