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

void readAllPersonsInfo(stPersonInfo per[100], int &numOfPer)
{
    cout << "How Many Persons: ";
    cin >> numOfPer;

    for (int i = 0; i < numOfPer; i++)
    {
        cout << "Please, enter person's " << i + 1 << " info: " << endl;
        readPersonInfo(per[i]);
    }
}

void printAllPersonsInfo(stPersonInfo per[100], int numOfPer)
{
    for (int i = 0; i < numOfPer; i++)
    {
        cout << "Person's " << i + 1 << " info: " << endl;
        printPersonInfo(per[i]);
    }
}

//* End Functions

int main()
{
    welcomeMessage();

    stPersonInfo person[100];
    int numberOfPersons = 0;

    readAllPersonsInfo(person, numberOfPersons);
    printAllPersonsInfo(person, numberOfPersons);

    cout << endl
         << endl;

    return 0;
}