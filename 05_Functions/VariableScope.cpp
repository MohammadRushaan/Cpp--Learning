#include <iostream>

using namespace std;

int myNum2=3;

void printNum()
{
    //cout << myNum << endl;
    // this will not print myNum in main as it is not defined in here
    // if i define myNum=2 here 
    //it would print 2
    // but if i declare myNum2 globally it can print
    cout << myNum2 << endl;
}

int main()
{
    //local variables: declared inside a function or block {}
    //                  accessible only to that specific func or block
    // global variables: declared outside of all functions
    //                  accessible to all functions

    // local variable is prioritised over global
    // for gloabl to dominate
    // precede with ::-- scope resoluton operator
    // ::var is for global

    int myNum2=1;
    cout << myNum2 << endl;
    cout << ::myNum2<< endl;
    printNum();
    return 0;
}