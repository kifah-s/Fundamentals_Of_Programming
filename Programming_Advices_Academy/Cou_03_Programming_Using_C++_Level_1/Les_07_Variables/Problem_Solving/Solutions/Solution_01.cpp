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

    string name = "Kifah Saloum";
    int age = 24;
    string city = "Swida";
    string country = "Syria";
    float monthSalary = 5000;
    char gender = 'M';
    bool isMarried = true;

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