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
    string str = "";
    cout << "Please, enter your string: ";
    getline(cin, str);

    return str;
}

int CountCapitalLetters(string str)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            counter++;
        }
    }

    return counter;
}

int CountSmallLetters(string str)
{
    int counter = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (islower(str[i]))
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    WelcomeMessage();

    string myString = "";
    int stringLength = 0, countCapital = 0, countSmall = 0;

    myString = ReadString();

    stringLength = myString.length();
    cout << "\nString Length: " << stringLength << endl;
    
    countCapital = CountCapitalLetters(myString);
    cout << "Capital Letters Count: " << countCapital << endl;
    
    countSmall = CountSmallLetters(myString);
    cout << "Small Letters Count: " << countSmall << endl;


    cout << endl
         << endl;

    return 0;
}