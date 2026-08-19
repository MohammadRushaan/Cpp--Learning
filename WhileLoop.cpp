#include <iostream>

using namespace std;

int main()
{
    // while Loop is useful to repeat a procedure till a certain condition is met

    string name;

    while (name.empty())
    {
        cout << "Enter your name" << endl;
        getline(cin, name);
    }

    cout<< "Hello" << name;

    return 0;
}