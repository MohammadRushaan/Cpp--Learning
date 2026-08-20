#include <iostream>
#include <ctime>

using namespace std;

char UserChoice()
{
    char player;
    do
    {
        cout << "Rock-Paper-Scissors-Game\n";
        cout << " r for rock\n";
        cout << " p for paper\n";
        cout << " s for scissors\n";
        cin >> player;
    }while(player != 'r' && player!='p' && player!='s');

    return player;
}
char CompChoice()
{
    srand(time(0));
    int num = rand() %3 +1;

    switch(num)
    {
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
}
void showChoice(char choice)
{
    switch(choice)
    {
        case 'r':
            cout <<"Rock\n";
            break;
        case 'p':
            cout <<"paper\n";
            break;
        case 's':
            cout <<"scissor\n";
            break;
    }

}
void chooseWinner(char player,char computer)
{
    switch(player)
    {
        case 'r':
            if (computer =='r')
                cout << "Its a tie\n";
            else if (computer == 'p')
                cout << "You lose\n";
            else
                cout << "You win\n";
            break;
        case 'p':
            if (computer =='p')
                cout << "Its a tie\n";
            else if (computer == 's')
                cout << "You lose\n";
            else
                cout << "You win\n";
            break;
        case 's':
            if (computer =='s')
                cout << "Its a tie\n";
            else if (computer == 'r')
                cout << "You lose\n";
            else
                cout << "You win\n";
            break;
    }
}

int main()
{
    char player;
    char comp;

    player = UserChoice();
    cout << " Your Choice: \n";
    showChoice(player);

    comp=CompChoice();
    cout << "Computer's Choice: \n";
    showChoice(comp);

    chooseWinner(player,comp);

    return 0;
}