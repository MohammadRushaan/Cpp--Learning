#include <iostream>

using namespace std;

int main()
{
    // for multi dimensional arrays we use the concept of 
    // grids and matrix
    // first one is row 2nd is column
    // initialising row is not madatory but column is

    string cars[][3] = {{"Mustang","Endeavor", "raptor"},
                       {"Corvette", "Equinox", "silverado"},
                       {"challenger", "Durango", "Ram 150"}};

    // row manufaturer
    // column cars

    cout << cars[0][1] << "\n";

    int rows = sizeof(cars)/sizeof(cars[0]);
    int cols = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i=0; i < rows; i++)
    {
        for(int j=0; j< cols; j++)
        {
            cout<< cars[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}