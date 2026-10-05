#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //pseudo-random : not truly random but close

    //srand initialises the random no generator
    //within srand we need seed, typically use calendar

    srand(time(NULL));

    //rand() generates random number between 0 and 32767
    int num= rand();

    cout << num << endl;

    int dice = (rand() % 6) + 1 ; // range becomes 0 to 5
    // add 1 to make a dice
    // technially wahtever range you need , % upper limit for 
    // 1 to upper limit

    cout << dice <<endl;

    return 0;
}