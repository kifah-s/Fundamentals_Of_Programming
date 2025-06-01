#include <iostream>
#include <string>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printName(string name)
{
    cout << "\nHello, " << name << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    string name;

    cout << "Please, enter your name: ";
    getline(cin, name);

    printName(name);

    cout << endl
         << endl;

    return 0;
}