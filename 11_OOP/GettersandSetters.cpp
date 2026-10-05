#include <iostream>

using namespace std;

class Stove
{
    public:
        int temp=0;
        // this variable is publicly available to be accessed and modified
    private:
        int temp2=10;

    // to get  it we create a getter
    public: 
        int getTemprature()
        {
            return temp2;
        }
        void setTemp(int temprature)
        {
            temp2 = temprature;
        }
};

int main()
{
    // Abstraction: Hiding unnecessary data from outside
    //getter: function that makes a private attribute READABLE
    //setter: function that makes a private attribute WRIETABLE

    Stove stove;

    stove.temp=1000;
    cout<< stove.temp << endl;

    //stove.temp2 =100;
    // this will give error showing inaccessible

    cout << stove.getTemprature() << endl;
    // calling the getter function we can read the private variable

    stove.setTemp(20); // calling the setter function

    cout << stove.getTemprature() << endl;

    // You can also invoke setters within a constructor


    return 0;
}