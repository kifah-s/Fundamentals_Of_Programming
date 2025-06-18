#include <iostream>

using namespace std;

//* Structs

struct stPersonInfo
{
    int age = 0;
    string hasDriverLicense = "";
    bool hasRecommendation = false;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stPersonInfo getInformationFun()
{
    stPersonInfo p_1;

    cout << "Please, enter your age: ";
    cin >> p_1.age;

    cout << "Do you have driver license(yes or no): ";
    cin >> p_1.hasDriverLicense;

    cout << "Do you have Recommendation(yes = 1 OR no = 0): ";
    cin >> p_1.hasRecommendation;

    return p_1;
}

void checkHiredOrRejectedFun(stPersonInfo p_1)
{
    if (p_1.age > 21 && p_1.hasDriverLicense == "yes" || p_1.hasRecommendation == true)
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
    checkHiredOrRejectedFun(getInformationFun());

    cout << endl
         << endl;

    return 0;
}