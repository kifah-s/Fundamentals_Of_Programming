#include <iostream>
#include <cmath>

using namespace std;

//* Function

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

//* End Function

int main()
{
    welcomeMessage();

    float number = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    // cout << "\nNumber ^ 2: " << number * number;
    cout << "\nNumber ^ 2: " << round(pow(number, 2));
    
    // cout << "\nNumber ^ 3: " << number * number * number;
    cout << "\nNumber ^ 3: " << round(pow(number, 3));
    
    // cout << "\nNumber ^ 4: " << number * number * number * number;
    cout << "\nNumber ^ 4: " << round(pow(number, 4));


    cout << endl
         << endl;

    return 0;
}