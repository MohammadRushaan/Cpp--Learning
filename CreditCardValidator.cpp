/* Luhn Algorithm:
                    1. Double every second digitfrom right to left
                    if doubled number is 2 digits , split them
                    2. Add all single digits from step 1
                    3. Add all odd numbered digits from right to left
                    4. Sum results from step 2 and 3
                    5. If step 4 is divisible by 10, # is valid
*/

#include <iostream>

using namespace std;

int getDigit(const int num)
{
    return num %10 + (num /10 %10);
}
int sumOddDigits(const string cardNum)
{
    int sum=0;

    for(int i= cardNum.size() - 1; i>=0; i-=2)
    {
        sum = sum + getDigit((cardNum[i]- '0'));
        // -0 because we will find our number using ascii differences
    }
    return sum;
}
int sumEvenDigits(const string cardNum)
{
    int sum=0;

    //.size() returns the length of string
    
    for(int i= cardNum.size() - 2; i>=0; i-=2)
    {
        sum = sum + getDigit((cardNum[i]- '0')*2);
        // -0 because we will find our number using ascii differences
    }
    return sum;
    
}


int main()
{
    string cardNum ="";
    int result=0;

    cout << "Enter a Credit Card #: \n";
    cin >> cardNum;

    result = sumEvenDigits(cardNum) + sumOddDigits(cardNum);

    if( result %10 ==0)
        cout << "Card NUmber is VValid: \n";
    else
        cout<< "Card Number is not valid \n";
    return 0;
}