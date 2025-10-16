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
    string str = "";

    cout << "Please, enter your string: ";
    getline(cin, str);

    return str;
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

string ReverseWordsInString(string str_1)
{
    vector<string> myVector;
    string str_2 = "";

    myVector = SplitString(str_1, " ");

    vector<string>::iterator iter = myVector.end();
    while (iter != myVector.begin())
    {
        iter--;
        str_2 += *iter + " ";
    }

    str_2 = str_2.substr(0, str_2.length() - 1);

    return str_2;
}

int main()
{
    WelcomeMessage();

    string myString_1 = "";
    myString_1 = ReadString();

    cout << "\nString after reversing words: ";
    cout << ReverseWordsInString(myString_1);

    cout << endl
         << endl;

    return 0;
}