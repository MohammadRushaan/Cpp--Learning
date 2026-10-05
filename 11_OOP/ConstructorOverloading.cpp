#include <iostream>

using namespace std;

class Pizza
{
    public:
        string topping1;
        string topping2;

    Pizza(string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    // contructor overloading: multiple constuctors with same name but diff parameters
    //                         allows for varying arguments when instantiating an object


    Pizza pizza1("pepperoni");
    Pizza pizza2("Olivee", "Pineapple");

    return 0;
}