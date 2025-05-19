#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void printLetterH()
{
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "****************" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
    cout << "*              *" << endl;
}

//* End Function

int main()
{
    welcomeMessage();
    printLetterH();

    cout << endl
         << endl;

    return 0;
}