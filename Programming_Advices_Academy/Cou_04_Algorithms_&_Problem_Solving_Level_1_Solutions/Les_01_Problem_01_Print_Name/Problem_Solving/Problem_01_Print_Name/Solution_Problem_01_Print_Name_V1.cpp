#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printName(string name)
{
    cout << "Your Name is: " << name << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printName("kifah");

    cout << endl
         << endl;

    return 0;
}