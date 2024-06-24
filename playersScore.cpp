#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <string>
using namespace std;

class Player
{
private:
    string playerName;
    int totalScore;
    int ballsPlayed;

public:
    Player() : playerName(""), totalScore(0), ballsPlayed(0) {}
    void setName(string name)
    {
        playerName = name;
    }
    string getName()
    {
        return playerName;
    }
    void setScore(int score)
    {
        totalScore += score;
    }
    int getScore()
    {
        return totalScore;
    }
    void setBalls(int balls)
    {
        ballsPlayed += balls;
    }
    int getBalls() const
    {
        return ballsPlayed;
    }
};
int main()
{
    srand(time(0));
    string playerNames[11] = {"Babar Azam", "Naseem Shah", "Agha Salman", "Mohammad Amir", "Shaheen Afridi", "Shadab Khan", "Imad Wasim", "Fakhar Zaman", "Haris Rauf", "Mohammad Rizwan", "Iftikhar Ahmed"};
    Player players[11];
    for (int i = 0; i < 11; i++)
    {
        players[i].setName(playerNames[i]);
    }
    for (int i = 0; i < 11; i++)
    {
        cout << i + 1 << "." << players[i].getName() << "\n";
        cout << "Scores Per Ball: ";
        while (true)
        {
            int score = -1 + rand() % (6 - (-1) + 1);
            if (score == 5)
                continue;
            if (score == -1)
            {
                cout << "OUT\n";
                break;
            }
            players[i].setScore(score);
            players[i].setBalls(1);
            cout << score << ",";
        }
        cout << "Total Score: " << players[i].getScore();
        cout << "\t\tBalls Played: " << players[i].getBalls() << "\n\n\n";
    }
    cout << "<<<<<< Match Summary>>>>>>" << "\n";
    cout << "Player Name\t\tScore\t\tBalls Played\n";
    for (int i = 0; i < 11; i++)
    {
        cout << players[i].getName() << "\t\t" << players[i].getScore() << "\t\t" << players[i].getBalls();
    }
    int maxScore = players[0].getScore();
    string manOfTheMatch = players[0].getName();
    for (int i = 1; i < 11; i++)
    {
        if (players[i].getScore() > maxScore)
        {
            manOfTheMatch = players[i].getName();
            maxScore = players[i].getScore();
        }
    }
    cout << "\n\nMan of the Match: " << manOfTheMatch;
    getch();

    return 0;
}