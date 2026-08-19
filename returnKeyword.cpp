#include <iostream>

using namespace std;

double area(double sideLen)
{
    double result = sideLen*sideLen;
    return result;
    // return the value result to the calling function
}

int main()
{
    //return : return a value back to calling function
    //         where you called the encompassing function

    double side=5.0;
    cout << " area of square:" <<area(side) << endl;
    return 0;
}