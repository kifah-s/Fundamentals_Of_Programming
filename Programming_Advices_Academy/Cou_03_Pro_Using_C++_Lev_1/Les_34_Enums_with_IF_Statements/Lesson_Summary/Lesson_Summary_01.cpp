#include <iostream>

using namespace std;

enum enColor
{
    red = 1,
    blue = 2,
    green = 3,
    yellow = 4
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
    enColor color;

    cout << "***************************" << endl;
    cout << "Please, chose the number of your color: " << endl;
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "***************************" << endl;
    cout << "Your Choice: ";
    cin >> chose;

    // if (chose == 1)
    // {
    //     cout << "\nYour color is Red." << endl;
    //     system("color 4f");
    // }
    // else if (chose == 2)
    // {
    //     cout << "\nYour color is Blue." << endl;
    //     system("color 1f");
    // }
    // else if (chose == 3)
    // {
    //     cout << "\nGreen." << endl;
    //     system("color 2f");
    // }
    // else if (chose == 4)
    // {
    //     cout << "\nYour color is Yellow." << endl;
    //     system("color 6f");
    // }
    // else
    // {
    //     cout << "\nWrong Choice." << endl;
    // }

    color = (enColor)chose; //* Important.
    if (color == enColor::red)
    {
        cout << "\nYour color is Red." << endl;
        system("color 4f");
    }
    else if (color == enColor::blue)
    {
        cout << "\nYour color is Blue." << endl;
        system("color 1f");
    }
    else if (color == enColor::green)
    {
        cout << "\nYour color is Green." << endl;
        system("color 2f");
    }
    else if (color == enColor::yellow)
    {
        cout << "\nYour color is Yellow." << endl;
        system("color 6f");
    }
    else
    {
        cout << "\nWrong Choice." << endl;
    }

    cout << endl
         << endl;

    return 0;
}