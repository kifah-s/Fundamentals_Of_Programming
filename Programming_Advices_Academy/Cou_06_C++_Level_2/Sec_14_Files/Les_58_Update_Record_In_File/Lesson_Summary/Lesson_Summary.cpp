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

void UpdateRecordFromFile(string fileName, string record, string updateTo)
{
    vector<string> vecFileContent;

    LoadDataFromFileToVector("myFile.txt", vecFileContent);

    for (string &line : vecFileContent)
    {
        if (line == record)
        {
            line = updateTo;
        }
    }

    SaveVectorToFile(fileName, vecFileContent);
}

void PrintFileContent(string fileName)
{
    string line = "";

    fstream myFile;
    myFile.open(fileName, ios::in); //* Read Mode;

    if (myFile.is_open())
    {
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

    cout << "File Content Before Update." << endl;
    PrintFileContent("myFile.txt");

    UpdateRecordFromFile("myFile.txt", "Ali", "Omar");

    cout << "\nFile Content After Update." << endl;
    PrintFileContent("myFile.txt");

    cout << endl
         << endl;

    return 0;
}