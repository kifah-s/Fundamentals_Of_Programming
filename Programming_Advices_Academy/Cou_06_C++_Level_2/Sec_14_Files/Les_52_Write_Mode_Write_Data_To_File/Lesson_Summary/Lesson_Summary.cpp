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

    myFile.open("myFile.txt", ios::out); //* Write Mode.

    if (myFile.is_open())
    {
        myFile << "Hi, this is the first line." << endl;
        myFile << "Hi, this is the second line." << endl;
        myFile << "Hi, this is the third line." << endl;

        myFile.close();
    }

    cout << endl
         << endl;

    return 0;
}