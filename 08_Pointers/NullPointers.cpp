#include <iostream>

using namespace std;

int main()
{
    // NUll value: a special value that means something has no value
    //             when a pointer holds a null value then that pointer 
    //             is not pointing at anything

    // nullptr = keyword represents null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    int *pointer = nullptr;
    int x=123;

    pointer =&x;

    if(pointer  == nullptr)
        cout << " Address assigning failed \n";
    else
    {
        cout  << " Address assigned \n";
        cout << *pointer <<endl;
    }

    //when using pointers, be careful that your code isnt dereferencing null
    // or pointing to free memory
    // this will cause undefined behaviour

    return 0;
}