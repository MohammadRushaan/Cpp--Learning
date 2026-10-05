#include <iostream>

using namespace std;

int main()
{
    //break: break out of Loop or switch
    //continue: skip current iteration

    for(int i=1;i<=20;i++)
    {
        if (i==10)
            continue;
        if (i==13)
            break;

        cout << i << endl;
    }
    return 0;
}