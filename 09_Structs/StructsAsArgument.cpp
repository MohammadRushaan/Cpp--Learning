#include <iostream>

using namespace std;

struct Cars
{
    string model;
    int year;
    string colour;

};

void printCar(Cars car)
{
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.colour << endl;
}
void paintCar(Cars &car, string colour)
{
    car.colour = colour;
}

int main()
{
    Cars car1;
    Cars car2;

    car1.model ="Mustang";
    car1.year =1969;
    car1.colour ="Red";

    car2.model ="Silverado";
    car2.year =1983;
    car2.colour ="Silver";

    printCar(car1);
    printCar(car2);

    //Structs are pass by value
    
    paintCar(car1, "Black");

    printCar(car1);

    // becuase pass by value makes a copy the car colour didnt change
    // to chnage is pass by ference using & address of operator

    return 0;
}