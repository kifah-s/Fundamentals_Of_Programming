#include <iostream>

using namespace std;

void WelcomeMessage()
{
    system("cls");
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    string myString = "My name is kifah saloum, I love programming.";

    //* Prints the length of the string.
    cout << "length: " << myString.length() << endl;

    //* Returns the letter at position 3.
    cout << ".at(3): " << myString.at(3) << endl;

    //* Adds @ProgrammingAdvices to the end of string.
    myString.append(" @ProgrammingAdvices");
    cout << "append: " << myString << endl;

    //* Inserts Ali at position 7.
    myString.insert(7, " (Ali)");
    cout << "insert: " << myString << endl;

    //* Prints all the next 8 letters from position 16.
    cout << "substr: " << myString.substr(16, 8) << endl;

    //* Adds one character to the end of the string.
    myString.push_back('X');
    cout << "push_back: " << myString << endl;

    //* Removes one character from the end of the string.
    myString.pop_back();
    cout << "pop_back: " << myString << endl;

    //* Finds Ali in the string.
    cout << "find: " << myString.find("Ali") << endl;

    //* Finds ali in the string.
    cout << "find: " << myString.find("ali") << endl;

    //* Finds ali in the string.
    if (myString.find("ali") == myString.npos)
    {
        cout << "ali is not found" << endl;
    }

    cout << "myString[0]: " << myString[0] << endl;
    cout << "myString[1]: " << myString[1] << endl;

    //* clears all string letters.
    myString.clear();
    cout << "clear: " << myString << endl;

    cout << endl
         << endl;

    return 0;
}