#include <iostream>

using namespace std;

void Iterativewalk(int steps)
{
    for(int i=0; i<steps; i++)
    {
        cout << " Step taken \n";
    }
}
void RecursiveWalk(int steps)
{
    if (steps>0)
    {
        cout << "Step taken \n";
        RecursiveWalk(steps-1);
    }
}

int Factorial(int num)
{
    if (num ==1)
        return 1;
    
    
    return num* Factorial(num-1);
}

int main()
{
    // recursion : A programming technique where the function invokes itself from within
    //             Break a complex concept into a repeatable single step

    // iterative vs recursion

    //adv: less code and is cleaner
    //      useful for sorting and searching algorithms

    //disadv: uses more memory 
    //          slower

    Iterativewalk(3);

    RecursiveWalk(5);

    cout<< Factorial(5) << endl;

    return 0;
}