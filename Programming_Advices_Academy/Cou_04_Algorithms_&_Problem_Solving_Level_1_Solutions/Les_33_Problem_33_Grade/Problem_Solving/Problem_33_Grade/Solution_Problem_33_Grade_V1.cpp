#include <iostream>

using namespace std;

//* Functions

void WelcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int ReadMarkFun()
{
    int m = 0;
    cout << "Please, enter a mark: ";
    cin >> m;

    return m;
}

void CheckMarkFun(int m)
{
    if (m >= 90 && m <= 100)
    {
        cout << "A" << endl;
    }
    else if (m >= 80 && m <= 89)
    {
        cout << "B" << endl;
    }
    else if (m >= 70 && m <= 79)
    {
        cout << "C" << endl;
    }
    else if (m >= 60 && m <= 69)
    {
        cout << "D" << endl;
    }
    else if (m >= 50 && m <= 59)
    {
        cout << "E" << endl;
    }
    else if (m < 50)
    {
        cout << "F" << endl;
    }
}

//* End Functions

int main()
{
    WelcomeMessageFun();
    CheckMarkFun(ReadMarkFun());

    cout << endl
         << endl;

    return 0;
}