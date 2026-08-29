#include <iostream>

using namespace std;

enum day{Sunday=0, Monday=1, Tuesday=2, Wednesday=3, Thursday=4, Friday=5, Saturday=6};

// if you dont explicitly assign values in the enum
// it will implicitly assign values strting from 0 fro the fiirst then so on

int main()
{
    // enums : User defined datatype that consists of 
    //          paired named- integer constants
    //          

    //string today ="Saturday";

    // Normally you cannot examine a string in switch 

    day today =Monday;
    // enums variable will only take values defined in the enum set

    switch(today)
    {
        case 0:
            cout << "It is Sunday \n";
            break;
        case 1:
            cout << "It is Monday \n";
            break;
        case 2:
            cout << "It is Tuesday \n";
            break;
        case 3:
            cout << "It is Wednesday \n";
            break;
        case 4:
            cout << "It is Thursday \n";
            break;
        case 5:
            cout << "It is Friday \n";
            break;
        case 6:
            cout << "It is Saturday \n";
            break;
        default:
            cout << "Wrong day \n";

        
    }

    return 0;

}