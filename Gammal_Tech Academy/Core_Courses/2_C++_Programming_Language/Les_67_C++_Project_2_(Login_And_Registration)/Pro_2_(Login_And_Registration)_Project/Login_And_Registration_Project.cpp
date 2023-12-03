

//* >>>>> Login And Registration System Project <<<<< *//

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void menuFun();
void loginFun();
void registrationFun();
void forgotPasswordFun();
void exitFun();

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

    switch (choice)
    {
    case 1:
        loginFun();
        break;

    case 2:
        registrationFun();
        break;

    case 3:
        forgotPasswordFun();
        break;

    case 4:
        exitFun();
        break;

    default:
        system("cls");
        cout << "\nNote: Please select from the options given above.";

        // Recursion function.
        main();
    }

    return 0;
}

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
void loginFun()
{
    // Declare variables.
    int count;
    string userId, password, id, pass;

    // clear screen.
    system("cls");

    // Receive user name and password from user.
    cout << "\nPlease enter user name and password: \n";
    cout << "\nUser Name: \n";
    cin >> userId;
    cout << "\nPassword: \n";
    cin >> password;

    // Create file.
    ifstream input("records.txt");

    //
}

// Registration function.
void registrationFun()
{
}

// Forgot password function.
void forgotPasswordFun()
{
}

// Exit function.
void exitFun()
{
    cout << "\n\nThank You\n\n";
}
//* ..... End Functions ..... *//