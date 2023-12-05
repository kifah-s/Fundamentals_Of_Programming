

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
void shopping :: menu()
{
    // Declare variable.
    int choice;
    string email, password;

    // Print main menu.
    cout  << "\n.....................\n";
    cout  << "SUPERMARKET MAIN MENU";
    cout  << "\n.....................\n\n";
    cout  << "1) Administrator..\n\n";
    cout  << "2) Buyer..\n\n";
    cout  << "3) Exit..\n\n";

    // Receive client select.
    cout  << "Please select: ";
    cin >> choice;

}
//* ............ End Function ............



int main()
{
    // Creat object.
    shopping c1;
    c1.menu();

    return 0;
}