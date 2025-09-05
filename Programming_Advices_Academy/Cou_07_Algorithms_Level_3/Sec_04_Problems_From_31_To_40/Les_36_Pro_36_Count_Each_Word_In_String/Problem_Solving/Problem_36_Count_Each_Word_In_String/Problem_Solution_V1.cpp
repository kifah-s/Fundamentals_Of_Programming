#include <iostream>
#include <string>

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

short CountEachWordInString(string myString)
{
    string delim = " ", sWord;
    short pos = 0, counter = 0;

    while ((pos = myString.find(delim)) != std::string::npos)
    {
        sWord = myString.substr(0, pos);

        if (sWord != "")
        {
            // cout << sWord << endl;
            counter++;
        }

        myString.erase(0, pos + delim.length());
    }

    if (myString != "")
    {
        // cout << myString << endl;
        counter++;
    }

    return counter;
}

int main()
{
    WelcomeMessage();

    string myString = "";
    short countWord = 0;

    myString = ReadString();
    countWord = CountEachWordInString(myString);
    
    cout << "\nThe number of words in your string are: " << countWord << endl;

    cout << endl
         << endl;

    return 0;
}