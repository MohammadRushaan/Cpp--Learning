#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));

    num = rand() %100 +1;

    cout << " NUMBER GUESSING GAME " << endl;

    do
    {
        cout << "Enter Guess b/w 1 and 100:" << endl;
        cin >> guess;
        tries++;

        if(guess > num)
        {
            cout<< " High \n";
        }
        else if( guess < num)
        {
             cout<< " low \n";
        }
        else
        {
             cout<< " Correct \n";
             cout<< "no. of tries: "<< tries <<endl;
        }
    }while(guess != num);

}