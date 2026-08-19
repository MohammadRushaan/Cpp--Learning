#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); 
    //uses current time as seed

    int num= rand() % 5 +1;

    switch(num)
    {
        case 1:
            cout << " Yo win 1" << endl;
            break;
        case 2:
            cout << " Yo win 2" << endl;
            break;
        case 3:
            cout << " Yo win 3" << endl;
            break;
        case 4:
            cout << " Yo win 4" << endl;
            break;
        case 5:
            cout << " Yo win 5" << endl;
            break;
    }

    return 0;
}