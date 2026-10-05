#include <iostream>
#include <ctime>

using namespace std;

void drawboard(char *spaces)
{
    cout <<"\n";
    cout << "     |     |     " << "\n";
    cout << "  "<< spaces[0]<< "  |  "<< spaces[1]<<"  |  "<< spaces[2] << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  "<< spaces[3]<< "  |  "<< spaces[4]<<"  |  "<< spaces[5] << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout << "  "<< spaces[6]<< "  |  "<< spaces[7]<<"  |  "<< spaces[8] << "\n";
    cout << "_____|_____|_____" << "\n";
    cout << "     |     |     " << "\n";
    cout <<"\n";
    
}
void playerMove(char *spaces, char player)
{
    int num=0;
    do
    {
        cout << "Enter Spot to mark: (1-9): \n";
        cin >> num;
        num--;

        if(spaces[num] == ' ')
        {
            spaces[num]  = player;
            break;
        }
    }while(!num >0 || num<8);

    
}
void CompMove(char *spaces, char comp)
{
    int num;
    srand(time(0));

    while(true)
    {
        num =rand() %9;
        if (spaces[num] == ' ')
        {
            spaces[num] = comp;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char comp)
{
    //row wise
    if (spaces[0] == spaces[1] && spaces[1]==spaces[2] && spaces[0]!=' ')
    {
        spaces[0] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else if (spaces[3] == spaces[4] && spaces[4]==spaces[5] && spaces[3]!=' ')
    {
        spaces[3] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else if (spaces[6] == spaces[7] && spaces[7]==spaces[8] && spaces[6]!=' ')
    {
        spaces[6] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    //column wise now
    else if (spaces[0] == spaces[3] && spaces[3]==spaces[6] && spaces[0]!=' ')
    {
        spaces[0] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else if (spaces[1] == spaces[4] && spaces[4]==spaces[7] && spaces[1]!=' ')
    {
        spaces[1] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else if (spaces[2] == spaces[5] && spaces[5]==spaces[8] && spaces[2]!=' ')
    {
        spaces[2] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    // diagonals
    else if (spaces[0] == spaces[4] && spaces[4]==spaces[8] && spaces[0]!=' ')
    {
        spaces[0] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else if (spaces[2] == spaces[4] && spaces[4]==spaces[6] && spaces[2]!=' ')
    {
        spaces[2] == player ? cout << "You win \n" : cout << "You Lose\n";
    }
    else
        return false;
    return true;
}
bool checkTie(char *spaces)
{
    for(int i=0; i<9; i++)
    {
        if(spaces[i] == ' ')
             return false;
    }
    cout << "Its a tie  \n";
    return true;
}

int main()
{
    char spaces[9];
    fill(spaces,spaces+10,' ');

    char player='X';
    char comp='O';

    bool running = true;

    drawboard(spaces);

    while(running)
    {
        playerMove(spaces, player);
        drawboard(spaces);

        if(checkWinner(spaces,player,comp)  == true )
        {
            running =false;
            break;
        }
        else if(checkTie(spaces) == true)
        {
            running = false;
            break;
        }

        CompMove(spaces, comp);
        drawboard(spaces);
        if(checkWinner(spaces,player,comp)  == true )
        {
            running =false;
            break;
        }
        else if(checkTie(spaces) == true)
        {
            running = false;
            break;
        }
    }

    cout << "Thank you for playing";

    return 0;
}