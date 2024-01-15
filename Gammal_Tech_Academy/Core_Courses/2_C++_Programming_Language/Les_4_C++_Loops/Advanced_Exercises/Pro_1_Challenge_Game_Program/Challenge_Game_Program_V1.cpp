

//* >>> Challenge Game Program ( Version 1 ) <<< */

/* >>> Challenge game (Who is most likely to ....... ?)
The game consists of repeated questions in the same format, with the rest of the question replaced by dots. The answer to each question is a choice for one of the participating people, such as:

Who is the most likely to be the best at math?
Ahmed
Aly
Dina

There must be two or more people participating in the challenge. The score for each person is recorded according to the answers. Every time a person is chosen to answer a question that has a good quality, his score increases by 1. And if the person was chosen to answer a question he was It has a bad characteristic, the score is reduced by 1.

required is to write a program that asks users to enter how many participants are in the challenge... and then starts the game, records the score, and displays the winner at the end. <<< */

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void selectNameFun(int x, int score[3]);
void questionsFun(int x, int score[3]);
void winnerFun(int score[3]);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int x = 0, score[3] = {0, 0, 0};
    // ... End Variables ...

    // ... Functions ...
    questionsFun(x, score);
    winnerFun(score);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Challenge Game Program ( Version 1 ) .." << endl
         << endl;
}

// Select name and Points calculation / Function.
void selectNameFun(int x, int score[3])
{
    cout << "1 - Ahmed" << endl
         << "2 - Aly" << endl
         << "3 - Diana" << endl
         << "Choose the best candidate: ";
    cin >> x;

    if (x == 1)
    {
        score[0]++;
    }
    else if (x == 2)
    {
        score[1]++;
    }
    else if (x == 3)
    {
        score[2]++;
    }

    cout << endl;
}

// Questions / Function.
void questionsFun(int x, int score[3])
{
    cout << "Q 1 ) Who is most likely to win a marathon race?" << endl;
    selectNameFun(x, score);

    cout << "Q 2 ) Who is most likely to become a famous actor or actress?" << endl;
    selectNameFun(x, score);

    cout << "Q 3 ) Who is most likely to travel the world extensively?" << endl;
    selectNameFun(x, score);

    cout << "Q 4 ) Who is most likely to excel in a leadership role?" << endl;
    selectNameFun(x, score);

    cout << "Q 5 ) Who is most likely to start their own successful business?" << endl;
    selectNameFun(x, score);

    cout << "Q 6 ) Who is most likely to be a computer programming genius?" << endl;
    selectNameFun(x, score);

    cout << "Q 7 ) Who is most likely to win a Nobel Prize?" << endl;
    selectNameFun(x, score);

    cout << "Q 8 ) Who is most likely to become a famous musician?" << endl;
    selectNameFun(x, score);

    cout << "Q 9 ) Who is most likely to write a bestselling book?" << endl;
    selectNameFun(x, score);

    cout << "Q 10 ) Who is most likely to excel in a competitive video game tournament?" << endl;
    selectNameFun(x, score);

    cout << "Ahmed Score = " << score[0] << endl
         << "Aly Score = " << score[1] << endl
         << "Diana Score = " << score[2] << endl
         << endl;
}

// Winner / Function.
void winnerFun(int score[3])
{
    if (score[0] > score[1] && score[0] > score[2])
    {
        cout << "Ahmed Winner"
             << endl
             << endl
             << endl;
    }
    else if (score[1] > score[0] && score[1] > score[2])
    {
        cout << "Ale Winner"
             << endl
             << endl
             << endl;
    }
    else if (score[2] > score[1] && score[2] > score[0])
    {
        cout << "Diana Winner"
             << endl
             << endl
             << endl;
    }
}
// *** End Functions ***
