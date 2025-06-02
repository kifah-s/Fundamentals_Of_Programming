#include <iostream>

using namespace std;

//* Structs

struct stPersonAddress
{
    string city;
    string country;
};

struct stPersonSalary
{
    float monthlySalary;
    float yearlySalary;
};

struct stPersonInformation
{
    string name;
    short age;
    stPersonAddress personAddress;
    stPersonSalary personSalary;
    char gender;
    bool marred;
};

//* End Structs

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

void readPersonInfo(stPersonInformation &per)
{
    cout << "Please, enter person name: ";
    cin >> per.name;

    cout << "Please, enter person country: ";
    cin >> per.personAddress.country;

    cout << "Please, enter person city: ";
    cin >> per.personAddress.city;

    cout << "Please, enter person monthly salary: ";
    cin >> per.personSalary.monthlySalary;

    cout << "Please, enter person yearly salary: ";
    cin >> per.personSalary.yearlySalary;

    cout << "Please, enter person gender: ";
    cin >> per.gender;

    cout << "Please, enter person marred: ";
    cin >> per.marred;
}

void printPersonInfo(stPersonInformation per)
{
    cout << "\n*************************************" << endl;
    cout << "Person Name: " << per.name << endl;
    cout << "Person Age: " << per.age << endl;
    cout << "Person City: " << per.personAddress.city << endl;
    cout << "Person Country: " << per.personAddress.country << endl;
    cout << "Person Monthly Salary: " << per.personSalary.monthlySalary << endl;
    cout << "Person Yearly Salary: " << per.personSalary.yearlySalary << endl;
    cout << "Person Gender: " << per.gender << endl;
    cout << "Person Marred: " << per.marred << endl;
    cout << "*************************************" << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    stPersonInformation person1;
    readPersonInfo(person1);
    printPersonInfo(person1);

    cout << endl
         << endl;

    return 0;
}