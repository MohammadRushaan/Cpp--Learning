#include <iostream>

using namespace std;

int main()
{
    // loop inside of loop

    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            cout << j << " ";
        }
        cout <<"\n";
    }
    cout << "\n";


    int rows;
    int columns;
    char ch;

    cout << "How many Rows" << endl;
    cin >> rows;

    cout << "How many columns" << endl;
    cin >> columns;

    cout << "charachter to print" << endl;
    cin >> ch;

    cout << "\n";
    
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=columns; j++)
        {
            cout << ch ;
        }
        cout << "\n";
    }
    return 0;
}