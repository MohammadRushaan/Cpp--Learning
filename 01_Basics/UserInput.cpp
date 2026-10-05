#include <iostream>

// cout <<(insertion operator)
//cin >> Iextraction operator)
// getline(std::cin, variable)-- to read multi word string
using std::string;
using std::cout;

int main()
{
    int age;

    cout <<" Enter Your age :"<< std::endl;
    std::cin >> age;

    string name;
    cout << "Enter your name" << std::endl;
    //std::cin >> name;
    // this will read only the name till first space 
    // for example Mohammad Rushaan will only be read as Mohammad

    std::getline(std::cin >> std::ws, name);

    // it still does not take input as there is a new line charchter in the input buffer that is red by getline
    //to fix that we add after cin >> std::ws which eliminates any whitesapce before user input

    cout << "Hello " << name <<std::endl;
    cout << "You are "<< age<< " years old"<< std::endl;

    return 0;
}