#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    cout << "\n Welcome to the Game of Stone, paper and scissors \n";
    cout << "\n Enter 1 for Stone \n 2 for Paper \n 3 for scissors \n";
    cout << "\n The game continues until you or the bot scores 5 points \n";
    int n = 0;
    int s1 = 0, s2 = 0;
    while (s1 < 5 && s2 < 5)
    {
        string choice = " ";
        string botChoiceString = " ";
        cout << "Enter your choice" << endl;
        cin >> n;
        int botChoice = 1 + (rand() % 3);
        cout << "Bot choice is" << botChoice << endl;
        switch (n)
        {
        case 1:
            choice = "stone";
            break;
        case 2:
            choice = "paper";
            break;
        case 3:
            choice = "scissors";
            break;
        default:
            cout <<  " \n \n Enter correct choice \n \n";
            break;
        }
        switch (botChoice)
        {
        case 1:
            botChoiceString = "stone";
            break;
        case 2:
            botChoiceString = "paper";
            break;
        case 3:
            botChoiceString = "scissors";
            break;
        }
        if (choice == botChoiceString && (choice!=" " && botChoiceString!=" "))
            cout << "Draw" << endl;
        else
        {
            if (choice == "stone")
            {
                if (botChoiceString == "paper")
                {
                    cout << "The bot wins this round" << endl;
                    s1++;
                }
                else
                {
                    cout << "The bot loses this round" << endl;
                    s2++;
                }
            }
            else if (choice == "paper")
            {
                if (botChoiceString == "stone")
                {
                    cout << "The bot loses this round" << endl;
                    s2++;
                }
                else
                {
                    cout << "The bot wins this round" << endl;
                    s1++;
                }
            }
            else if(choice=="scissors")
            {
                if (botChoiceString == "stone")
                {
                    cout << "The bot wins this round" << endl;
                    s1++;
                }
                else{
                     cout << "The bot loses this round" << endl;
                    s2++;
                }
            }
        }
        cout<<"The score at the end of the round is. Bot Score:"<<s1<<" Player score : "<<s2<<endl;
    }
    if(s1==5)
    cout<<"Sorry! The bot won.Better luck next time"<<endl;
    else
    cout<<"Wuhu! You won. Where the party at!"<<endl;
    return 0;
}