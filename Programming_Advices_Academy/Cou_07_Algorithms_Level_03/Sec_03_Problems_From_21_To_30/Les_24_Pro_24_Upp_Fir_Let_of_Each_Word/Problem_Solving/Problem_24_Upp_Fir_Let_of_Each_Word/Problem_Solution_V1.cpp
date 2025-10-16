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

string UpperFirstLetterOfString(string myString)
{
    bool isFirstLetter = true;

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] != ' ' && isFirstLetter)
        {
            myString[i] = myString[i] - 32;
        }

        // isFirstLetter = (myString[i] == ' ' ? true : false);
        isFirstLetter = (myString[i] == ' ');
    }

    return myString;
}

int main()
{
    WelcomeMessage();

    string myString = ReadString();

    myString = UpperFirstLetterOfString(myString);

    cout << "String After Conversion: " << myString << endl;

    cout << endl
         << endl;

    return 0;
}