#include <iostream>

using namespace std;

int main()
{
    string questions[]={"1. What Year  was C++ created ?: ",
                        "2. Who invented c++? :",
                        "3. What is the predecessor of c++?: ",
                        "4. is the earth flat?"};

    string options[][4]={{"A. 1969", "B.1975", "C.1985", "D.1989"},
                        {"A. Guido van Rossum", "B. Bjarne Stoustroup", "C. Jhon Kahn", "D. Mark Zuckerberg"},
                        {"A. C", "B. C--", "C. C+", "D. B++ "},
                        {"A. yes", "B. No", "C. Sometimes", "D. maybe"}};

    char ansKey[] ={'C', 'B', 'A', 'B'};

    int size= sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for(int i=0; i<size; i++)
    {
        cout << questions[i] << endl;

        for(int j=0; j< sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << endl;
        }
        cout <<"\n";

        cin >> guess;
        guess = toupper(guess);

        if(guess == ansKey[i])
        {
            cout <<" Correct \n";
            score++;
        }
        else
        {
            cout << "Wrong \n";
            cout << "answer: " << ansKey[i] << endl;
        }
    }

    cout<< "Final score: "<< score << endl;

    return 0;
}