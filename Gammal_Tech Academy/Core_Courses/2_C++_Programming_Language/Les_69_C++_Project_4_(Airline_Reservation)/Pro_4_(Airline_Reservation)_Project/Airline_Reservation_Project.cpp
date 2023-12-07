

//* >>>>>>>>>>>>>>> Airline Reservation <<<<<<<<<<<<<<< *//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu();

//* ............. Classes .............
// Create Management class.
class Management
{
public:
    // Constructor.
    Management()
    {
        mainMenu();
    }
};
//* ............. End Classes .............

//* ............. Function .............
// Create mainMenu function, "Global" function.
void mainMenu()
{
    // Declare variable.
    int lChoice, sChoice, back;

    // Print main menu.
    cout << "\n\n.......... Kifah Airlines ..........\n\n";
    cout << "............ Main menu .............\n\n";
    cout << "Enter (1) to add the customer details.\n";
    cout << "Enter (2) for flight registration.\n";
    cout << "Enter (3) for ticket and charges.\n";
    cout << "Enter (4) to exit.\n";
    cout << "____________________________________\n\n";

    // Receive select from user.
    cout << "Please enter your choice: ";
    cin >> lChoice;

    //* Details d;
    //* registration r;
    //* ticket r;

    switch (lChoice)
    {
    case 1:
    {
        cout << "\n\n............ Customers .............\n\n";

        //* d.information();

        cout << "Please enter any kay to go back to \"Main Menu\": ";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 2:
    {
        cout << "\n\n............ Book a flight using this system .............\n\n";

        //* r.flights();

        break;
    }

    case 3:
    {
        cout << "\n\n............ Get your ticket .............\n\n";

        //* t.bill();

        cout << "Your ticket is printed, you can collect it.\n\n";

        cout << "Please enter (1) to display your ticket: ";
        cin >> back;

        if (back == 1)
        {
            //* t.display();

            cout << "\nPlease enter any kay to go back to \"Main Menu\": ";
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }

    case 4:
    {
        cout << "\n\n............ Thank you .............\n\n";
        break;
    }

    default:
    {
        cout << "\n\nInvalid input, Please try agin.\n";

        mainMenu();

        break;
    }
    }
}
//* ............. End Function .............

int main()
{
    Management M;

    return 0;
}