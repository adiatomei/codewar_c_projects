#include <iostream>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

class SnakesLadders
{
  public:
    int curPlayer;
    int playerOne;
    int playerTwo;
    string status;
    bool winnerStat;
    int * ptrPlayer;
    SnakesLadders(){
        curPlayer = 1;
        playerOne = 0;
        playerTwo = 0;
        winnerStat = false;
    };
    string play(int die1, int die2)
    {
        if(winnerStat)
        {
            status = "Game Over!";
        }
        else
        {
            vector<vector<int>> specNum = {
                {2, 38}, {7, 14}, {8, 31}, {15, 26}, {16, 6},
                {21, 42}, {28, 84}, {36, 44}, {46, 25}, {49, 11},
                {51, 67}, {62, 19}, {64, 60}, {71, 91}, {74, 53},
                {78, 98}, {87, 94}, {92, 88}, {95, 75}, {99, 80}
                 };
            stringstream ss;
            int sum = die1 + die2;
            ptrPlayer = NULL;
            curPlayer == 1 ? ptrPlayer = &playerOne : ptrPlayer = &playerTwo;
            *ptrPlayer += sum;

            if(*ptrPlayer == 100)
            {
                ss << "Player " << curPlayer << " Wins!";
                winnerStat = true;
            }
            else
            {

                if(*ptrPlayer > 100 )
                {
                    *ptrPlayer = 100 - (*ptrPlayer - 100);
                }

                for(int j = 0; j < specNum.size(); j++)
                {
                    if(*ptrPlayer == specNum[j][0])
                    {
                        *ptrPlayer = specNum[j][1];
                    }

                }

                ss << "Player " << curPlayer << " is on square " << *ptrPlayer;
            }


            status = ss.str();

            if(die1 == die2)
            {
                curPlayer = curPlayer == 1 ? 1 : 2;
            }else
            {
                curPlayer = curPlayer == 1 ? 2 : 1;
            }

        }
        return status;

    };
};


int main()
{

    SnakesLadders game;
    int num1, num2;
    cout << "Player one insert the numbers ";
    cin >> num1 >> num2;
    cout << game.play(num1, num2) << endl;


    return 0;
}
