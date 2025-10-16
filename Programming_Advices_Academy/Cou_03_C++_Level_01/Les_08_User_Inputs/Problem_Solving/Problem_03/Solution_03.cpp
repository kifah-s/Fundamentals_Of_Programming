#include <iostream>

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

    int years = 0;
    int age = 0;
    
    cout << "Please, enter years: ";
    cin >> years;
    
    cout << "Please, enter age: ";
    cin >> age;
    
    
    int ageAfterYears = years + age;

    cout << "After " << years << " years you will be " << ageAfterYears << " years old." << endl;

    cout << endl
         << endl;

    return 0;
}