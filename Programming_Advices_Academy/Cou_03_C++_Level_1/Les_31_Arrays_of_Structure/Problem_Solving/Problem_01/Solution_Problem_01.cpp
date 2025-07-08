#include <iostream>

using namespace std;

//* Structs

struct stPersonInfo
{
    string firstName;
    string lastName;
    short age;
    string phoneNumber;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void readPersonInfo(stPersonInfo &per)
{
    cout << "Please, enter person first name: ";
    cin >> per.firstName;

    cout << "Please, enter person last name: ";
    cin >> per.lastName;

    cout << "Please, enter person age: ";
    cin >> per.age;

    cout << "Please, enter person phone number: ";
    cin >> per.phoneNumber;

    cout << "---------------------------------------------" << endl;
}

void printPersonInfo(stPersonInfo per)
{
    cout << "\n----------------------------------------------" << endl;
    cout << "Person first name: " << per.firstName << endl;
    cout << "Person last name: " << per.lastName << endl;
    cout << "Person age: " << per.age << endl;
    cout << "Person phone number: " << per.phoneNumber << endl;
    cout << "----------------------------------------------" << endl;
}

void readAllPersonsInfo(stPersonInfo per[2])
{
    readPersonInfo(per[0]);
    readPersonInfo(per[1]);
}

void printAllPersonsInfo(stPersonInfo per[2])
{
    printPersonInfo(per[0]);
    printPersonInfo(per[1]);
}

//* End Functions

int main()
{
    welcomeMessage();

    stPersonInfo person[2];
    readAllPersonsInfo(person);
    printAllPersonsInfo(person);

    cout << endl
         << endl;

    return 0;
}