#include <iostream>
#include <string>
#include <vector>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string ReadString()
{
    string myString = "";
    cout << "Please, enter your string: ";
    getline(cin, myString);

    return myString;
}

vector<string> SplitString(string myString, string delim)
{
    vector<string> vecString;
    short postion = 0;
    string word = "";

    while ((postion = myString.find(delim)) != std::string::npos)
    {
        word = myString.substr(0, postion);

        if (word != "")
        {
            vecString.push_back(word);
        }

        myString.erase(0, postion + delim.length());
    }

    if (myString != "")
    {
        vecString.push_back(myString);
    }

    return vecString;
}

int main()
{
    WelcomeMessage();

    vector<string> vecString;

    vecString = SplitString(ReadString(), " ");
    cout << "\nToken: " << vecString.size() << endl;
    for (string &word : vecString)
    {
        cout << word << endl;
    }

    cout << endl
         << endl;

    return 0;
}