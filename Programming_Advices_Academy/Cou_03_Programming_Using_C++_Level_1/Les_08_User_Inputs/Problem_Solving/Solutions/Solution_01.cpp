#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    string name = "";
    int age = 0;
    string city = "";
    string country = "";
    float monthSalary = 0;
    float yearSalary = 0;
    char gender;
    bool isMarried;

    cout << "***********************************" << endl;
    cout << "please, enter Name: ";
    cin >> name;

    cout << "please, enter Age: ";
    cin >> age;

    cout << "please, enter City: ";
    cin >> city;

    cout << "please, enter Country: ";
    cin >> country;

    cout << "please, enter Month Salary: ";
    cin >> monthSalary;

    cout << "please, enter Yearly Salary: ";
    cin >> yearSalary;

    cout << "please, enter Gender: ";
    cin >> gender;

    cout << "please, enter Married: ";
    cin >> isMarried;
    cout << "***********************************" << endl;

    cout << "***********************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Month Salary: " << monthSalary << endl;
    cout << "Yearly Salary: " << monthSalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "***********************************" << endl;

    cout << endl
         << endl;

    return 0;
}