#include <iostream>
#include <string>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string getNameFun()
{
    string name;

    cout << "Please, enter your name: ";
    getline(cin, name);

    return name;
}

void printNameFun()
{
    string name = getNameFun();

    cout << "Hello, " << name << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printNameFun();

    cout << endl
         << endl;

    return 0;
}