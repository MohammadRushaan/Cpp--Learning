#include <iostream>

using namespace std;

int main()
{
    // switch : Alternative to using many else if staements
    //          compare one value against matching statements
    int month;
    cout << "enter month no. (1-12)" <<endl;
    cin >> month;

    switch(month)
    {
        case 1:
            cout << "It is January" <<endl;
            break;
        case 2:
            cout << "It is Feb" <<endl;
            break;
        case 3:
            cout << "It is March" <<endl;
            break;
        case 4:
            cout << "It is April" <<endl;
            break;
        case 5:
            cout << "It is May" <<endl;
            break;
        case 6:
            cout << "It is June" <<endl;
            break;
        case 7:
            cout << "It is July" <<endl;
            break;
        case 8:
            cout << "It is Aug" <<endl;
            break;
        case 9:
            cout << "It is Sept" <<endl;
            break;
        case 10:
            cout << "It is Oct" <<endl;
            break;
        case 11:
            cout << "It is Nov" <<endl;
            break;
        case 12:
            cout << "It is Dec" <<endl;
            break;
        default:
            cout << "Please enter only nos from 1-12";
    }
    return 0;
}