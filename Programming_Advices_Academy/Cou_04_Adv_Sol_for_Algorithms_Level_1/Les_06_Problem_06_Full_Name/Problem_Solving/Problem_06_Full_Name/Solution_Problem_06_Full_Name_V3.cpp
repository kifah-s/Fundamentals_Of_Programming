#include <iostream>

using namespace std;

//* Struct

struct stPersonInfo
{
    string firstName = "";
    string lastName = "";
};

//* End Struct

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stPersonInfo getPersonInfoFun()
{
    stPersonInfo p_1;

    cout << "Please, enter first name: ";
    cin >> p_1.firstName;
    
    cout << "Please, enter last name: ";
    cin >> p_1.lastName;

    return p_1;
}

void printPersonInfoFun(stPersonInfo person)
{
    cout << "\nHello " << person.firstName << " " << person.lastName << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();
    printPersonInfoFun(getPersonInfoFun());

    cout << endl
         << endl;

    return 0;
}