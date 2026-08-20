#include <iostream>
#include <iomanip>// floating point precision

using namespace std;
double balance=2000.0;

void showBalance(double acc)
{
    cout << " Your balance is :"<< setprecision(2) << fixed << acc << endl;
}
double deposit()
{
    double amt=0.0;
    cout << " enter amount to be deposited: \n";
    cin >> amt;
    if (amt >0)
    {
        return amt;
    }
    else
    {
        cout << " Not a valid amount\n";
    }
}
double withdraw()
{
    double amt=0.0;
    cout << " enter amount to be withdrawn: \n";
    cin >> amt;
    if (amt > balance)
    {
        cout<< " Insufficient balance\n";
        return 0.0;
    }
    return amt;
}

int main()
{
    
    int choice=0;

    
    do
    {
        cout<< "******************\n";
        cout<< "Enter Your choice:\n";
        cout<< "******************\n";
        cout<< "1.Show balance\n";
        cout<< "2.Deposit \n";
        cout<< "3.Withdraw\n";
        cout<< "4.Exit\n";
        cin >> choice;

        cin.clear();// This fucn will reset error flags in case of any error
        fflush(stdin);// clears the input buffer
        
        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance+= deposit();
                break;
            case 3:
                balance-= withdraw();
                break;
            case 4:
                cout << " Thank YOu for visiting \n";
                break;
            default:
                cout<< "Inavlid Choice\n";
        }
    
    }while(choice !=4);
}