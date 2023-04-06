#include <iostream>
#include <ctime>
#include <map>

using namespace std;

int main()
{
    map<int, string> moves;

    moves.emplace(0, "paper");
    moves.emplace(1, "stone");
    moves.emplace(2, "scissors");

    int userPoints = 0;
    int cpuPoints = 0;

    srand(time(0));

    while (userPoints < 3 && cpuPoints < 3)
    {
        int cpuMove = rand() % 3; // 0, 1, 2
        string userMove;

        cout << "Choose a move (paper, stone, scissors): ";
        cin >> userMove;

        cout << "-> Computer move is " << moves.at(cpuMove) << ", your's move is " << userMove << "." << endl;
        cout << "-----------------------------" << endl;

        if (moves.at(cpuMove) == "paper" && userMove == "stone")
            cpuPoints++;
        else if (moves.at(cpuMove) == "paper" && userMove == "scissors")
            userPoints++;
        else if (moves.at(cpuMove) == "stone" && userMove == "paper")
            userPoints++;
        else if (moves.at(cpuMove) == "stone" && userMove == "scissors")
            cpuPoints++;
        else if (moves.at(cpuMove) == "scissors" && userMove == "paper")
            cpuPoints++;
        else if (moves.at(cpuMove) == "scissors" && userMove == "stone")
            userPoints++;

        cout << "Computer have: " << cpuPoints << " points, you have: " << userPoints << " points." << endl;
    }

    if (userPoints > cpuPoints)
        cout << "\n!!! You win !!!" << endl;
    else
        cout << "\n!!! Computer win !!!" << endl;

    srand(time(0));

    return 0;
}