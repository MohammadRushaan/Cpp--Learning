#include <iostream>

using namespace std;

int main()
{
    // && : Check if both conditions are True then True
    // || : check if either condition is True then True
    // !  : reverses the logical state of operand

    int temp;
    bool sunny=true;

    cout<< "Enter temperature" << endl;
    cin >> temp;

    if(temp>0 && temp <30)
    {
        cout << " Good temp" << endl;
    }
    if(temp<=0 || temp>=30)
    {
        cout << " Bad Temp" << endl;
    }
    if(!sunny == true)
    {
        cout << "it is Cloudy" << endl;
    }
    else
    {
        cout <<" It is Sunny" << endl;
    }

    return 0;
}