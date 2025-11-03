//* Code After Separation.

#include <iostream>
// #include "Lib_01_clsPerson.h"
#include "Lib_02_clsEmployee.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    clsEmployee Employee1(10, "Mohammed", "Abu-Hadhoud", "A@a.com", "8298982", "CEO", "ProgrammingAdvices", 5000);
    Employee1.Print();

    cout << endl
         << endl;

    return 0;
}