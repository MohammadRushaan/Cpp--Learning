#include <iostream>

using namespace std;

void bakePizza()
{
    cout<< " Here is your Pizza \n";
}
void bakePizza(string top)
{
    cout << " Pizza with topping: "<< top << endl;
}

int main()
{
    bakePizza();
    string topping=" Pineapple";
    bakePizza(topping);

    // it is valid for funtions to have same name 
    // but not same name + same parameters
    // and there can be many function but need diff signature
    // signature : name + parameters (unique)

    return 0;
}
