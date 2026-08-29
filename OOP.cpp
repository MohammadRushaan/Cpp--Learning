#include <iostream>

using namespace std;

class Human
{
    public:
        string name;
        string occupation;
        int age;

        // a method is afunction that belongs to a class

        void eat()
        {
            cout << " This person is eating\n";
        }
        void drink()
        {
            cout << " This person is drinking\n";
        }
        void sleep()
        {
            cout << " This person is sleeping\n";
        }
};

class Car
{
    public:
        string model;
        int year;

    void accelerate()
    {
        cout << "Accelerating \n";
    }
    void brake()
    {
        cout << "breaking \n";
    }
};

int main()
{
    //object: A collection of attributes and methods
    //        they can have characteristics and could perform actions
    //        Can be used to mimic real world items 
    //        Created from a class which acts as a "blue-print".

    //put ; after class parentheses

    // Since we have a class Human 
    // we will utilise its objects

    Human human1;
    // human1 is an object of class Human

    human1.name =" Rushaan";
    human1.occupation= "Student";
    human1.age = 19;

    cout << human1.name << endl;
    cout << human1.occupation<< endl;
    cout << human1.age << endl;

    // this part was similar as struct but we can also perform actions

    human1.eat();
    human1.drink();
    human1.sleep();


    Human human2;

    human2.name ="Bro";
    human2.occupation= "Teacher";
    human2.age = 21;

    cout << human2.name << endl;
    cout << human2.occupation<< endl;
    cout << human2.age << endl;

    human2.eat();
    human2.drink();
    human2.sleep();

    Car car1;

    car1.model="ford";
    car1.year=2022;

    cout << car1.model << endl;
    cout << car1.year <<endl;

    car1.accelerate();
    car1.brake();

    return 0;
}