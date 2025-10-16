#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void LoadDataFromFileToVector(string fileName, vector<string> &vecFileContent)
{
    fstream myFile;
    myFile.open(fileName, ios::in); //* Read Mode.

    if (myFile.is_open())
    {
        string line;

        while (getline(myFile, line))
        {
            vecFileContent.push_back(line);
        }

        myFile.close();
    }
}

int main()
{
    WelcomeMessage();

    vector<string> vecFileContent;

    LoadDataFromFileToVector("myFile.txt", vecFileContent);

    for (string &line : vecFileContent)
    {
        cout << line << endl;
    }

    cout << endl
         << endl;

    return 0;
}