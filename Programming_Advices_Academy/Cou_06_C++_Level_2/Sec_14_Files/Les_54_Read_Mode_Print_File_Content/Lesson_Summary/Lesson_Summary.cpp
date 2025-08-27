#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void PrintFileContent(string fileName)
{
    fstream myFile;

    myFile.open(fileName, ios::in); //* Read Mode.

    if (myFile.is_open())
    {
        string line;

        while (getline(myFile, line))
        {
            cout << line << endl;
        }

        myFile.close();
    }
}

int main()
{
    WelcomeMessage();

    PrintFileContent("myFile.txt");

    cout << endl
         << endl;

    return 0;
}