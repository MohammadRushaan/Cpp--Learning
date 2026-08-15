#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int age;
    cout<< "Enter Your age" << endl;
    cin >> age;

    if (age >= 18)
    {
        cout << "Legal" << endl;
    }
    else if( age <= 0)
    {
        cout << "no way" << endl;
    }
    else
    {
        cout << "Not legal" << endl;
    }

    //Order of if and else if  matters

    return 0;
}