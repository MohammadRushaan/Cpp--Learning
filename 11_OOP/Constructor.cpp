#include <iostream>

using namespace std;

class Student
{
    public:
        string name;
        int age;
        double gpa;

    Student(string name, int age, double gpa)
    {
        this->name = name;
        //stores parameter name in class variable name
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    // constructor: special method that is automatically called when an obect is
    //              instantiated, useful for assigning values to attributes as arguments
    //              It has the same name as class and is defined inside the class

    Student student1("Rushaan",19,3.5);
    // when we instantiate our student object
    // we will pass these values as arguments to the constructor 

    cout<< student1.name << endl;
    cout<< student1.age << endl;
    cout<< student1.gpa << endl;


    return 0;
}