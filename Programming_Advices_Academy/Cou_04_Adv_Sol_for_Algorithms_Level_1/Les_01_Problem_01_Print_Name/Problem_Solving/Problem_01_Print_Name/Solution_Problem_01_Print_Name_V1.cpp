#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printNameFun(string name)
{
    cout << "Your Name is: " << name << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printNameFun("kifah");

    cout << endl
         << endl;

    return 0;
}