#include <iostream>

using namespace std;

int main()
{
    // dynamic memory: memory that is allocated after the program
    //                 is already compiled and running
    //                 Use the 'new' operator to allocate memory in heap
    //                 rather than stack

    //                 Useful  when we dont know how much memory we need.
    //                 makes our program more flexible, escpecially when 
    //                 accepting user input.

    int *pNum = NULL;

    pNum = new int;

    *pNum =21;
    
    cout << "Address: "<< pNum << endl;
    cout << "value: "<< *pNum << endl;

    delete pNum; // freeing up memory address to prevent memory leak

    char *pGrades = NULL;
    
    pGrades = new char[5];

    for (int i=0; i<5; i++)
    {
        cout << " Enhter grade no ." << i+1 << endl;
        cin >> pGrades[i];
    }
    for (int i=0; i<5; i++)
    {
        cout << pGrades[i] << endl; 
    }

    delete pGrades;
    return 0;
}