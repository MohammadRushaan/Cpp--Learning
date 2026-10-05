#include <iostream>

using namespace std;

int LinearSearch(int array[],int size,int num)
{
    for (int i=0; i<size; i++)
    {
        if (array[i]==num)
            return i;
    }
    return -1;
}
int main()
{
    int num[]= {1,2,3,4,5,6,7,8,9,10};

    int size =sizeof(num) /sizeof(num[0]);
    int index;

    int myNum;

    cout << "Enter a no to search for\n";
    cin >> myNum;

    index =  LinearSearch(num,size,myNum);

    if (index>=0)
        cout << "Element found at index: " <<index << endl;
    else
        cout << "Element not found \n";

    return 0;
}