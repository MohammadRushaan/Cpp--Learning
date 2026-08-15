#include <iostream>

/* Precedence : Parentheses
                Multiply and divide
                add and sutract
*/

int main()
{
    //arithmetic operations = +-*/
    int students=20;
    //students=students+1;
    students+= 1;

    std::cout << students << std::endl;
    
    students -=1;
    students = students*2;

    students =students /2;

   return 0;
}