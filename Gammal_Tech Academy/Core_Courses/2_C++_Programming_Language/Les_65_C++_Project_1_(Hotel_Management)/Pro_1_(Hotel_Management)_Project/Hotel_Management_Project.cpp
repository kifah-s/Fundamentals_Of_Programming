

//* >>>>>>>>>>>>>>> Hotel Management Project <<<<<<<<<<<<<<< *//

#include <iostream>

using namespace std;

int main()
{
    int quant, choice;

    // Quantity ..
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    // Food items sold ..
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    // Total price of item ..
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\nQuantity of items we have ..\n\n";

    cout << "\nRooms Available: ";
    cin >> Qrooms;
    cout << "\nQuantity of pasta: :";
    cin >> Qpasta;
    cout << "\nQuantity of burger: ";
    cin >> Qburger;
    cout << "\nQuantity of noodles: ";
    cin >> Qnoodles;
    cout << "\nQuantity of shake: ";
    cin >> Qshake;
    cout << "\nQuantity of chicken: ";
    cin >> Qchicken;

    cout << "\n\nPlease select from the menu options..\n";
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n\n8) Exit";

    cout << "Please enter your choice: ";
    cin >> choice;

    return 0;
}