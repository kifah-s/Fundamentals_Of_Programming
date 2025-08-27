#include <iostream>
#include <fstream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    fstream myFile;

    // myFile.open("myFille.txt", ios::out); //* Write Mode.

    // if (myFile.is_open())
    // {
    //     myFile << "Hi, this is a new line." << endl;
    //     myFile << "Hi, this is a new line." << endl;

    //     myFile.close();
    // }

    //* -------------------------------------------------

    // myFile.open("myFille.txt", ios::app); //* Append Mode.

    // if (myFile.is_open())
    // {
    //     myFile << "Hi, my name is kifah saloum." << endl;

    //     myFile.close();
    // }

    //* -------------------------------------------------

    myFile.open("myFille.txt", ios::out | ios::app); //* Append Mode.

    if (myFile.is_open())
    {
        myFile << "Hi, my name is shaza kadaj." << endl;

        myFile.close();
    }

    cout << endl
         << endl;

    return 0;
}