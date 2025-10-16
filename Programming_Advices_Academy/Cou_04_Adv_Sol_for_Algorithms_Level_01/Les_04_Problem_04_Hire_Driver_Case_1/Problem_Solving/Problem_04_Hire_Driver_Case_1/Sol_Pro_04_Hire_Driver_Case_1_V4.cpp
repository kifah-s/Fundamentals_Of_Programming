#include <iostream>

using namespace std;

//* Structs

struct stPersonInfo
{
    int age = 0;
    string driLic = "";
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stPersonInfo getAgeAndDriverLicenseFun()
{
    stPersonInfo p_1;

    cout << "Please, enter your age: ";
    cin >> p_1.age;

    cout << "Do you have driver license(yes or no): ";
    cin >> p_1.driLic;

    return p_1;
}

void checkHiredOrRejectedFun(stPersonInfo p_1)
{
    if (p_1.age > 21 && p_1.driLic == "yes")
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
    checkHiredOrRejectedFun(getAgeAndDriverLicenseFun());

    cout << endl
         << endl;

    return 0;
}