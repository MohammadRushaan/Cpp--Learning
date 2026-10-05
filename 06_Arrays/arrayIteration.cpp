#include <iostream>

using namespace std;

int main()
{
    string names[]= { "Spongebob", "patrick", "Squidward"};

    for(int i=0; i < sizeof(names) / sizeof(string) ; i++)
    {
        cout << names[i] <<endl;
    }

    //for-each loop: loop that eases the traversal over an
    //              iterable dataset
    //              less syntax but less flexibility
    //              start to end

    for(string name : names)
    {
        cout << name << endl;
    }

}