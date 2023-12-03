

//* >>>>> Login And Registration System Project <<<<< *//

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

//* ..... Functions ..... *//
// Menu function.
void menuFun()
{
    cout << "\n\n..............................................................\n";
    cout << "                   Welcome to the login page                  \n";
    cout << "............................ Menu ............................\n";
    cout << "Please enter 1 to (LOGIN)\n";
    cout << "Please enter 2 to (REGISTER)\n";
    cout << "Please enter 3 if you forgot your (PASSWORD)\n";
    cout << "Please enter 4 to (EXIT)\n\n";
}

// Login function.
void loginFun();

// Registration function.
void registrationFun();

// Forgot password.
void forgotPasswordFun();
//* ..... End Functions ..... *//

int main()
{
    //* ... Variables ... *//
    // Declare variable for choice;
    int choice;
    //* ... End Variables ... *//

    // Call menu function.
    menuFun();

    // Receive value from user.
    cout << "Please enter your choice: ";
    cin >> choice;

    


    return 0;
}