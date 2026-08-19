#include <iostream>

using namespace std;

int main()
{
    // do while loop : does at least one interation first then checks loop condition

    int num;

    do{
        cout<< "Enter a Positive No." << endl;
        cin >> num;
    } while(num < 0);

    return 0;
}