#include <iostream>

using namespace std;

void sort(int array[], int size)
{
    int temp;
    for(int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (array[j] > array[j+1])// ascending for descending <
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    /* In Bubble sort 
       We start from the first and check if our num is larger 
       than the next num, if so we swap the positions
       then move onto the next position
       eventually the largest will be  at the last place
       so for next iterations we dont need to go to the very last 
    */

    int arr[]={10,1,9,2,8,3,7,4,6,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<< "Unsorted aarray \n";

    for (int elem : arr)
    {
        cout << elem << " ";
    }
    
    cout<< "\n";
    cout << "Sorted array \n";
    sort(arr, size);

    for (int elem : arr)
    {
        cout << elem << " ";
    }

    return 0;
}