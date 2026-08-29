#include <iostream>

using namespace std;

class Animal
{
    public:
        bool alive =true;

    void eat()
    {
        cout << "This animal is eating \n";
    }
};

class Dog : public Animal
{
    public:

    void bark()
    {
        cout << " Woof \n";
    }
};

class Cat : public Animal
{
    public :

    void meow()
    {
        cout << " Meow \n";
    }
};
int main()
{
    //Inheritance: A class can recieve attributes and methods from another class
    //              Children classes inherit from parent class
    //              Helps to reuse similar code found within multiple classes

    Dog dog1;

    cout << dog1.alive << endl;// 1 true
    dog1.eat();
    dog1.bark();

    // even thought the class dog does not  have alive or eat it works
    // since it inherits animal class 
    // features of animal class are accessible to dog class

    Cat cat1;
    cout<< cat1.alive << endl;
    cat1.eat();
    cat1.meow();
    // cat1.bark(); // willl give error as it does not inehrit dog class

    return 0;
}