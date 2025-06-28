#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void myFunction()
{
    cout << "This is function" << endl;
}

void myFunction2()
{
    cout << "This is function 2" << endl;
}

//* End Functions

int main()
{
    welcomeMessage();
    myFunction();
    myFunction();
    myFunction();
    myFunction2();
    myFunction2();
    myFunction2();

    cout << endl
         << endl;

    return 0;
}