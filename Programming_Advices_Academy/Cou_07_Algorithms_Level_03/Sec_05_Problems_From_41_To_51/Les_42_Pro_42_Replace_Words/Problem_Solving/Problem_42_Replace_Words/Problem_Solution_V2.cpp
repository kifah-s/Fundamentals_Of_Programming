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

string ReplaceWordsInString(string str_1, string word1, string word2)
{
    vector<string> myVector;
    string str_2 = "";

    myVector = SplitString(str_1, " ");

    // vector<string>::iterator iter = myVector.begin();
    // while (iter != myVector.end())
    // {
    //     if (*iter == word1)
    //     {
    //         *iter = word2;
    //     }
    //     str_2 += *iter + " ";
    //     iter++;
    // }

    for (string &word : myVector)
    {
        if (word == word1)
        {
            word = word2;
        }
        
        str_2 += word + " ";
    }
    

    str_2 = str_2.substr(0, str_2.length() - 1);

    return str_2;
}

int main()
{
    WelcomeMessage();

    string myString_1 = "Hello my name is kifah saloum";

    cout << "\nOriginal String: ";
    cout << myString_1 << endl;

    cout << "\nString after replace: ";
    cout << ReplaceWordsInString(myString_1, "Hello", "Hi");

    cout << endl
         << endl;

    return 0;
}