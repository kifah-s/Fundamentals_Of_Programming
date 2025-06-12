#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printLetterH()
{
    cout << "\n*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "****************" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
}
//* End Functions

int main()
{
    welcomeMessage();

    printLetterH();

    cout << endl
         << endl;

    return 0;
}