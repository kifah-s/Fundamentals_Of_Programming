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

    // int number1 = 12, number2 = 25, number3 = 0;
    // number3 = number1 & number2;
    // cout << "number 3: " << number3 << endl;

    cout << "12 & 25: " << (12 & 25) << endl;
    
    cout << "12 && 25: " << (12 && 25) << endl;

    cout << endl
         << endl;

    return 0;
}           