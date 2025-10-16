#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    int mark = 90;
    string result = "";

    //* Using norma if
    // if (mark >= 60)
    // {
    //     result = "Pass";
    // }
    // else
    // {
    //     result = "Fail";
    // }
    // cout << result << endl;

    //* Using short hand if
    // result = (mark >= 60) ? "Pass" : "Fail";
    // cout << result << endl;
    // (mark >= 60) ? cout << "Pass" : cout << "Fail";
    // (mark >= 60) ? cout << "Pass" << endl : cout << "Fail" << endl;

    cout << endl
         << endl;

    return 0;
}