#include <iostream>

using namespace std;

void WelcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int main()
{
    WelcomeMessage();

    int number = 1;
    string result;

    result = (number > 0) ? "Positive" : "Negative";
    cout << "Number is: " << result << endl;

    cout << endl
         << endl;

    return 0;
}