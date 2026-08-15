#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double res;

    std::cout << "Enter either (+,-,*,/): ";
    std:: cin >> op;

    std::cout << "Enter num 1: ";
    std:: cin >> num1;

    std::cout << "Enter num2: ";
    std:: cin >> num2;

    switch(op)
    {
        case '+':
            res= num1+num2;
            std::cout << res;
            break;
        case '-':
            res= num1-num2;
            std::cout << res;
            break;
        case '*':
            res= num1*num2;
            std::cout << res;
            break;
        case '/':
            res= num1/num2;
            std::cout << res;
            break;
        default:
            std::cout << "Not a  valid operation \n";
    }

    return 0;
}