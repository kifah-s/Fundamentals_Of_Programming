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

//* End Functions

int main()
{
    welcomeMessage();

    stPersonInformation person1;
    person1.name = "Kifah Saloum";
    person1.age = 24;
    person1.personAddress.country = "Syria";
    person1.personAddress.city = "Shahba";
    person1.personSalary.monthlySalary = 1000;
    person1.personSalary.yearlySalary = 12000;
    person1.gender = 'M';
    person1.marred = 0;

    cout << "Person Name: " << person1.name << endl;
    cout << "Person Age: " << person1.age << endl;
    cout << "Person City: " << person1.personAddress.city << endl;
    cout << "Person Country: " << person1.personAddress.country << endl;
    cout << "Person Monthly Salary: " << person1.personSalary.monthlySalary << endl;
    cout << "Person Yearly Salary: " << person1.personSalary.yearlySalary << endl;
    cout << "Person Gender: " << person1.gender << endl;
    cout << "Person Marred: " << person1.marred << endl;

    cout << endl
         << endl;

    return 0;
}