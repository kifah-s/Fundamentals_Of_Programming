#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void SaveVectorToFile(string fileName, vector<string> vecFileContent)
{
    fstream myFile;
    myFile.open(fileName, ios::out); //* Write Mode.

    if (myFile.is_open())
    {
        for (string &line : vecFileContent)
        {
            if (line != "")
            {
                myFile << line << endl;
            }
        }

        myFile.close();
    }
}

int main()
{
    WelcomeMessage();

    vector<string> vecFileContent = {"kifah", "houda", "madal", "saloum"};

    SaveVectorToFile("myFile.txt", vecFileContent);

    cout << endl
         << endl;

    return 0;
}