#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

string getFirstNameFun()
{
    string firstName = "";

    cout << "Please, enter first name: ";
    cin >> firstName;

    return firstName;
}

string getLastNameFun()
{
    string lastName = "";

    cout << "Please, enter last name: ";
    cin >> lastName;

    return lastName;
}

void printFullNameFun()
{
    string firstName = getFirstNameFun();
    string lastName = getLastNameFun();

    cout << "\nHello " << firstName << " " << lastName << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printFullNameFun();

    cout << endl
         << endl;

    return 0;
}