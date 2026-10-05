#include <iostream>

using namespace std;

int max(int x, int y)
{
    return (x>y) ? x : y;
}

template <typename T, typename U>

auto max2(T x, U y)
{
    return (x>y) ? x : y;
}

int main()
{
    // function templates: describe what a function looks likej
    //                      can be used to generate as many as overloaded functions
    //                      as needed, each using different datatypes
    //                      replace the function return type to 'T'
    // we need a decleration of T as well

    cout << max(1,2) << endl;
    // works for int but not for floating points
    // one solution is overloading the function
    // now we implement function templates
    cout << max2(1,2) << endl;
    cout << max2(1.0,2.1) << endl;
    cout << max2('a','b') << endl;

    // to pass 2 diff dataypes and compare them
    // add more typename
    // set return type to auto , compiler decides the return type
    
    return 0;
}