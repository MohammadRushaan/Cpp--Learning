#include <iostream>

using namespace std;

int main()
{
    //array: a data structure that can hold multiple values
    //       values are accessed by index
    //       of same datatype only
    //       index start with 0

    string cars[] = {"Corvette","Mustang","Ferrari"};

    cout << cars <<endl;
    // displays the memory address of the array

    for(string car : cars)
    {
        cout << car << endl;
    }

    // if you dont know what to put
    // we need to set a predefined size of an array

    double prices[5];

    // datatype arr_name[size];

    prices[0]= 3.00;

    cout << prices[0] << endl;

    return 0;
}