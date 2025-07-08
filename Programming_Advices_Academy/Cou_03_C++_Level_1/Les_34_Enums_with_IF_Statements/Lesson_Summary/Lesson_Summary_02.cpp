#include <iostream>

using namespace std;

enum enCountry
{
    jordan = 1,
    tunisia = 2,
    syria = 3,
    oman = 4,
    egypt = 5,
    iraq = 6
};

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Functions

int main()
{
    welcomeMessage();

    int chose = 0;
    // enCountry country;

    cout << "***************************" << endl;
    cout << "Please, chose the number of your country: " << endl;
    cout << "(1) jordan" << endl;
    cout << "(2) tunisia" << endl;
    cout << "(3) syria" << endl;
    cout << "(4) oman" << endl;
    cout << "(5) egypt" << endl;
    cout << "(6) iraq" << endl;
    cout << "***************************" << endl;
    cout << "Your Choice: ";
    cin >> chose;

    // country = (enCountry)chose; //* Important.
    // if (country == enCountry::jordan)
    // {
    //     cout << "\nYour country is jordan." << endl;
    // }
    // else if (country == enCountry::tunisia)
    // {
    //     cout << "\nYour country is tunisia." << endl;
    // }
    // else if (country == enCountry::syria)
    // {
    //     cout << "\nYour country is syria." << endl;
    // }
    // else if (country == enCountry::oman)
    // {
    //     cout << "\nYour country is oman." << endl;
    // }
    // else if (country == enCountry::egypt)
    // {
    //     cout << "\nYour country is egypt." << endl;
    // }
    // else if (country == enCountry::iraq)
    // {
    //     cout << "\nYour country is iraq." << endl;
    // }
    // else
    // {
    //     cout << "\nWrong Choice." << endl;
    // }

    (enCountry)chose; //* Important.
    if (chose == enCountry::jordan)
    {
        cout << "\nYour country is jordan." << endl;
    }
    else if (chose == enCountry::tunisia)
    {
        cout << "\nYour country is tunisia." << endl;
    }
    else if (chose == enCountry::syria)
    {
        cout << "\nYour country is syria." << endl;
    }
    else if (chose == enCountry::oman)
    {
        cout << "\nYour country is oman." << endl;
    }
    else if (chose == enCountry::egypt)
    {
        cout << "\nYour country is egypt." << endl;
    }
    else if (chose == enCountry::iraq)
    {
        cout << "\nYour country is iraq." << endl;
    }
    else
    {
        cout << "\nWrong Choice." << endl;
    }

    

    cout << endl
         << endl;

    return 0;
}