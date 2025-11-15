#include <iostream>
#include <iomanip>

#include "Classes/UI/Main_Menu/clsMainScreen.h"

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Project ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    clsMainScreen::ShowMainMenu();

    cout << endl
         << endl;

    return 0;
}