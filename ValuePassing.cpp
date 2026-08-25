#include <iostream>

using namespace std;

void swap(string x, string y)
{
    string temp = x;
    x=y;
    y=temp;
}

void swap2(string &x, string &y)
{
    string temp = x;
    x=y;
    y=temp;
}

int main()
{
    string x ="Kool-Aid";
    string y= "water";

    // swap these two 

    string temp = x;
    x=y;
    y=temp;

    cout << "Glass X: "<< x << endl;
    cout << "Galss y: "<< y << endl;

    // We have Successfully swapped
    // but what if we try to swap using a function

    swap(x,y);
    cout << "Glass X: "<< x << endl;
    cout << "Galss y: "<< y << endl;

    // There was no swap
    //because in calling the function , we create copies of value
    // so the swap function is changing copies of the varible
    //This is pass by value

    swap2(x,y);
    cout << "Glass X: "<< x << endl;
    cout << "Galss y: "<< y << endl;
    // By putting & before the parameters , we are now passing memoery address of those variables 
    // hence no copy is created instead original memory locations are used
    // this is pass by reference

    // put & while printing and check memory addresses
    // prefer pass by reference

    return 0;
}