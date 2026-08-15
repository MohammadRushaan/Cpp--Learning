#include <iostream>
#include <cmath>

int main()
{
    double x=3.14;
    double y=4;
    double z;

    z = std::max(x,y);
    z = std::min(x,y);
    // both of these are in the std 
    // rest are in c math , so we need to include cmath header

    z= pow(2,3);
    z= sqrt(9);
    z= abs(-5);
    z= round(x);
    z= ceil(x);
    z= floor(x);

    std::cout << z << std::endl;

    // there are tons more 
    // head to cplusplus- refrence-cmath

    double a,b,c;

    std::cout << "Enter side a:" << std::endl;
    std::cin >> a;

    std::cout << "Enter side b:" << std::endl;
    std::cin >> b;

    a= pow(a,2);
    b= pow(b,2);

    c=sqrt(a+b);


    std::cout << "Side c is:  "<< c << std::endl;
    return 0;
}