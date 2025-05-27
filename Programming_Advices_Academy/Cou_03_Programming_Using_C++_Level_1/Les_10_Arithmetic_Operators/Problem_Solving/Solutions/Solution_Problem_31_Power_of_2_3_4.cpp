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

    int number = 0;

    cout << "Please, enter a number: ";
    cin >> number;

    // cout << "\nNumber ^ 2: " << number * number;
    cout << "\nNumber ^ 2: " << pow(number, 2);
    
    // cout << "\nNumber ^ 3: " << number * number * number;
    cout << "\nNumber ^ 3: " << pow(number, 3);
    
    // cout << "\nNumber ^ 4: " << number * number * number * number;
    cout << "\nNumber ^ 4: " << pow(number, 4);


    cout << endl
         << endl;

    return 0;
}