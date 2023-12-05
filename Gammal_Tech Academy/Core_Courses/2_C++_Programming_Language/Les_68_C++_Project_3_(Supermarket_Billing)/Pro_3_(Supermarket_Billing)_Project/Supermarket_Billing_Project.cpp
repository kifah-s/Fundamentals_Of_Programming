

//* >>>>>>>>>>>>>>> Supermarket Billing <<<<<<<<<<<<<<< *//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//* ............ Classes ............
// Creat class.
class shopping
{
private:
    int pCode;
    float price;
    float discount;
    string pName;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void remove();
    void list();
    void receipt();
};
//* ............ End Classes ............

//* ............ Function ............
// Menu function.
void shopping ::menu()
{
m:
    // Declare variable.
    int choice;
    string email, password;

    // Print main menu.
    cout << "\n.....................\n";
    cout << "SUPERMARKET MAIN MENU";
    cout << "\n.....................\n\n";
    cout << "1) Administrator..\n\n";
    cout << "2) Buyer..\n\n";
    cout << "3) Exit..\n";
    cout << "_________________________________\n\n";

    // Receive user select.
    cout << "Please enter your choice: ";
    cin >> choice;

    // Create switch.
    switch (choice)
    {
    case 1: // Administrator case.
    {
        // Receive email and password from user.
        cout << "\n.. \" Login \" ..\n";
        cout << "\nPlease enter \"Email\": ";
        cin >> email;
        cout << "Please enter \"Password\": ";
        cin >> password;

        // Check email and password.
        if (email == "kifah@email.com" && password == "12345")
        {
            administrator();
        }
        else
        {
            cout << "\nInvalid email or password..\n";
        }
    }
    break;

    case 2: // Buyer case.
    {
        // buyer();
    }
    break;

    case 3: // Exit case.
    {
        exit(0);
    }
    break;

    default:
    {
        cout << "\nPlease select from the given options..\n";
    }
    break;
    }
    goto m;
}
// End Menu function.

// administrator function.
void shopping ::administrator()
{
m:
    // Declare variable.
    int choice;

    // Print administrator menu.
    cout << "\n..................\n";
    cout << "ADMINISTRATOR MENU";
    cout << "\n..................\n\n";
    cout << "1) Add Product..\n\n";
    cout << "2) Edit Product..\n\n";
    cout << "3) Remove Product..\n\n";
    cout << "4) Back to main menu..\n";
    cout << "_________________________________\n\n";

    // Receive user select.
    cout << "Please enter your choice: ";
    cin >> choice;

    // Create switch.
    switch (choice)
    {
    case 1: // Add Product case.
    {
        // add();
    }
    break;

    case 2: // Edit Product case.
    {
        // edit();
    }
    break;

    case 3: // Remove Product case.
    {
        // remove();
    }
    break;

    case 4: // Menu case.
    {
        menu();
    }
    break;

    default:
    {
        cout << "\nInvalid choice..\n";
    }
    break;
    }
    goto m;
}
// End administrator function.

//* ............ End Function ............

int main()
{
    // Creat object.
    shopping c1;
    c1.menu();

    return 0;
}