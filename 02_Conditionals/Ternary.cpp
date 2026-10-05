#include <iostream>

using namespace std;

int main()
{
    //ternary oeprator ?: = replacement to an if/else statement
    // condition ? expression True : expression fail;

    int grade= 55;

    grade >=65 ? cout<< "You Pass" : cout<< "You Fail" << endl;
    grade %2==0 ? cout << "Even" : cout << "Odd" ;

    return 0;
}