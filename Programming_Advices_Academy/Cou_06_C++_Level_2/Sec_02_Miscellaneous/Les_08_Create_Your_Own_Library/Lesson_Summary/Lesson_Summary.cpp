#include <iostream>
using namespace std;

#include "MyLibrary.h"
// using namespace MyLibrary;

#include "MyInputLibrary.h"
// using namespace MyInputLibrary;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    MyLibrary::Test();
    cout << "Sum Tow Numbers: " << MyLibrary::SumTowNumbers(10, 5) << endl;

    int number = MyInputLibrary::ReadNumber();
    cout << "Number is: " << number << endl;

    cout << endl
         << endl;

    return 0;
}