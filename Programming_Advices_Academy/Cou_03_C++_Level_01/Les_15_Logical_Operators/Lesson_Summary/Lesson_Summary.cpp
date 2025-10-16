#include <iostream>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    // bool a = true, b = false;
    // cout << "(A && B): " << (a && b) << endl;
    // cout << "(A || B): " << (a || b) << endl;
    // cout << "!A: " << !a << endl;
    // cout << "!B: " << !b << endl;
    // cout << "!(A && B): " << !(a && b) << endl;
    // cout << "!(A || B): " << !(a || b) << endl;

    bool result;
    // NOT(5 > 6 OR 7 = 7) AND NOT (1 OR false).
    result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << "Result: " << result << endl;


    

    cout << endl
         << endl;

    return 0;
}