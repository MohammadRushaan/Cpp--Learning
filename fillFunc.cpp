#include <iostream>

using namespace std;

int main()
{
    // fill(): Fills a range of elements with a specified value
    //         fill(begin, end, value) in a data struct

    string foods[5]={"pizza","pizza","pizza","pizza","pizza"};
    // inefficient way for storing same value

    for(string food : foods)
    {
        cout << food << endl;
    }

    string food2[100];
    fill(food2, food2+100, "Apple");

    for(string food : food2)
    {
        cout << food << endl;
    }

    return 0;
}