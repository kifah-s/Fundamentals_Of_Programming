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

bool IsVowel(char myChar)
{
    myChar = tolower(myChar);

    return (myChar == 'a' || myChar == 'e' || myChar == 'i' || myChar == 'o' || myChar == 'u');
}

short CountVowel(string myString)
{
    short counter = 0;

    for (short i = 0; i < myString.length(); i++)
    {
        if (IsVowel(myString[i]))
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    WelcomeMessage();

    short countVowel = 0;

    string myString = ReadString();
    countVowel = CountVowel(myString);

    cout << "\nNumber of vowels is: " << countVowel << endl;

    cout << endl
         << endl;

    return 0;
}