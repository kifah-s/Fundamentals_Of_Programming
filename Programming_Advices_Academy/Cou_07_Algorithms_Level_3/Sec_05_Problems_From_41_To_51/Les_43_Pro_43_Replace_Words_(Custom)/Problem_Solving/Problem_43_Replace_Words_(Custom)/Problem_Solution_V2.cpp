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

vector<string> SplitString(string str_1, string delim)
{
    vector<string> vecString;
    short postion = 0;
    string word = "";

    while ((postion = str_1.find(delim)) != std::string::npos)
    {
        word = str_1.substr(0, postion);

        if (word != "")
        {
            vecString.push_back(word);
        }

        str_1.erase(0, postion + delim.length());
    }

    if (str_1 != "")
    {
        vecString.push_back(str_1);
    }

    return vecString;
}

string JoinString(vector<string> vString, string delim)
{
    string s1;

    for (string &s : vString)
    {
        s1 = s1 + s + delim;
    }

    return s1.substr(0, s1.length() - delim.length());
}

string LowerAllString(string s1)
{
    for (short i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
    }

    return s1;
}

string ReplaceWordInStringUsingSplit(string s1, string StringToReplace, string sReplaceTo, bool MatchCase = true)
{
    vector<string> vString = SplitString(s1, " ");

    for (string &s : vString)
    {
        if (MatchCase)
        {
            if (s == StringToReplace)
            {
                s = sReplaceTo;
            }
        }
        else
        {
            if (LowerAllString(s) == LowerAllString(StringToReplace))
            {
                s = sReplaceTo;
            }
        }
    }

    return JoinString(vString, " ");
}

int main()
{
    WelcomeMessage();

    string S1 = "Welcome to Jordan , Jordan is a nice country";
    string StringToReplace = "jordan";
    string ReplaceTo = "USA";

    cout << "\nOriginal String: " << S1 << endl;
    
    cout << "\nReplace with match case: ";
    cout << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo) << endl;

    cout << "\nReplace with dont match case: ";
    cout << ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false) << endl;

    cout << endl
         << endl;

    return 0;
}