#include <iostream>

using namespace std;

//when we pass an array to a function it decays into a pointer
// Hence loss of idea of size fo array
// to fix that pass size as well

double getTotal(double price[],int size)
{
    double total=0.0;
    for(int i=0; i<size ;i++)
    {
        total= total+ price[i];
    }
    return total;
}

int main()
{
    double prices[]= {49.99,15.05,75};
    double total =getTotal(prices,3);

    cout << "$" <<total;
    return 0;
}