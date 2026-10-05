#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name" << endl;

    getline(cin, name);
    
    //.lenght() returnss length of string

    if(name.length() >12)
    {
        cout << "Name cant be over 12 letters" << endl;
    }
    else
    {
        cout << "Welcome" << name << endl;
    }

    //.empty() returns true is string is empty

    if(name.empty())
    {
        cout << "You didn't enter your name" << endl;
    }
    else
    {
        cout << "Hello" << name << endl;
    }

    // .clear() clears string
    //name.clear();     

    string suffix= "@gmail.com";

    // string1.append(string2) - Adds string 2 after string 1 without any space

    name.append(suffix);
    cout << " Your username is: "<< name << endl;

    // string.at(index)- returns charachter at givenn index

    cout << name.at(0) <<endl;

    //string.insert(index,"newString"); - Inserts  New string at given Index
    name.insert(0,"Dr.");

    cout << name << endl;

    //string.find('char') - find the index of first occurence of given character

    cout<< name.find(' ')<< endl;

    //string.erase(startIndex, EndIndex)- removes portion of string from given
    // index to end index(exclusive)

    name.erase(0,3);
    cout << name << endl;

    // for more head to string class of cplusplus.com

    return 0;
}