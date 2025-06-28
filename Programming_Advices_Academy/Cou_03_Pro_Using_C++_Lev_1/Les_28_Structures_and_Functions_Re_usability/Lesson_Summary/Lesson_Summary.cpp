#include <iostream>

using namespace std;

//* Structs
struct stPersonInfo
{
    string firstName;
    string lastName;
    short age;
    string phone;
};

//* EndStructs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void readPersonInfo_1(stPersonInfo &per1)
{
    cout << "Please, enter first name: ";
    cin >> per1.firstName;
    cout << "Please, enter last name: ";
    cin >> per1.lastName;
    cout << "Please, enter age: ";
    cin >> per1.age;
    cout << "Please, enter phone number: ";
    cin >> per1.phone;
}

stPersonInfo readPersonInfo_2(stPersonInfo per1)
{
    cout << "Please, enter first name: ";
    cin >> per1.firstName;

    cout << "Please, enter last name: ";
    cin >> per1.lastName;

    cout << "Please, enter age: ";
    cin >> per1.age;

    cout << "Please, enter phone number: ";
    cin >> per1.phone;

    return per1;
}

void printPersonInfo(stPersonInfo per1)
{
    cout << "\n********************************" << endl;
    cout << "Person 1, First name: " << per1.firstName << endl;
    cout << "Person 1, Last name: " << per1.lastName << endl;
    cout << "Person 1, Age: " << per1.age << endl;
    cout << "Person 1, Phone number: " << per1.phone << endl;
    cout << "********************************" << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    stPersonInfo person_1;
    readPersonInfo_1(person_1);
    printPersonInfo(person_1);

    stPersonInfo person_2;
    person_2 = readPersonInfo_2(person_2);
    printPersonInfo(person_2);

    cout << endl
         << endl;

    return 0;
}