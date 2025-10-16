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

void DeleteRecordFromFile(string fileName, string record)
{
    vector<string> vecFileContent;

    LoadDataFromFileToVector("myFile.txt", vecFileContent);

    for (string &line : vecFileContent)
    {
        if (line == record)
        {
            line = "";
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

    cout << "File Content Before Delete." << endl;
    PrintFileContent("myFile.txt");

    DeleteRecordFromFile("myFile.txt", "Ali");

    cout << "\nFile Content After Delete." << endl;
    PrintFileContent("myFile.txt");

    cout << endl
         << endl;

    return 0;
}