

//* >>>>>>>>>>>>>>> Hotel Management Project <<<<<<<<<<<<<<< *//

#include <iostream>

using namespace std;

int main()
{
    //* .......... Variables .......... *//
    // Quant and choice variables.
    int quant, choice;
    // Quantity of items present ..
    int quantityRooms = 25, quantityPasta = 100, quantityBurger = 100, quantityNoodles = 100, quantityShake = 100, quantityChicken = 100;
    // The items sold ..
    int soldRooms = 0, soldPasta = 0, soldBurger = 0, soldNoodles = 0, soldShake = 0, soldChicken = 0;
    // Total price of item ..
    int totalRooms = 0, totalPasta = 0, totalBurger = 0, totalNoodles = 0, totalShake = 0, totalChicken = 0;
    //* .......... End Variables .......... *//

    cout << "\n\nPlease select from the menu options..\n";
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n\n8) Exit";

    cout << "\n\nPlease enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\nPlease enter the number of rooms you want: ";
        cin >> quant;

        if (quantityRooms - soldRooms >= quant)
        {
            soldRooms = soldRooms + quant;
            totalRooms = totalRooms + quant * 1200;

            cout << "\n"
                 << quant << " Room/Rooms have been allotted to you !!";
        }
        else
        {
            cout << "\nOh sorry, Only " << quantityRooms - soldRooms << " rooms remaining in hotel !!";
            break;
        }

    case 2:
        cout << "\nPlease enter Pasta Quantity: ";
        cin >> quant;

        if (quantityPasta - soldPasta >= quant)
        {
            soldPasta = soldPasta + quant;
            totalPasta = totalPasta + quant * 100;

            cout << "\n"
                 << quant << " Room/pasta have been allotted to you !!";
        }
        else
        {
            cout << "\nOh sorry, Only " << quantityPasta - soldPasta << " rooms remaining in hotel !!";
            break;
        }

    default:
        break;
    }

    return 0;
}