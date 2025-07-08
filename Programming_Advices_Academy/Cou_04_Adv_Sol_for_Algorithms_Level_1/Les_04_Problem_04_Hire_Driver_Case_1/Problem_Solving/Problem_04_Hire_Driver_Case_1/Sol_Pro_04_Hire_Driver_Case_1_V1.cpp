#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int getAgeFun()
{
    int age = 0;

    cout << "Please, enter your age: ";
    cin >> age;

    return age;
}

string getDriverLicenseFun()
{
    string driLic = "";

    cout << "Do you have driver license(yes or no): ";
    cin >> driLic;

    return driLic;
}

void checkHiredOrRejectedFun(string driLic, int age)
{
    if (age > 21 && driLic == "yes")
    {
        cout << "\nHired" << endl;
    }
    else
    {
        cout << "\nRejected" << endl;
    }
}

//* End Functions

int main()
{
    welcomeMessageFun();
    checkHiredOrRejectedFun(getDriverLicenseFun(), getAgeFun());

    cout << endl
         << endl;

    return 0;
}