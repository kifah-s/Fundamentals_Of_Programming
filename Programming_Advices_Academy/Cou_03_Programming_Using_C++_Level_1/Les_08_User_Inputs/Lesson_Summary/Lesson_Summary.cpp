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

    string name = "";
    int age = 0;

    cout << "Please, enter your name: ";
    cin >> name;
    
    cout << "Please, enter your age: ";
    cin >> age;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;

    cout << endl
         << endl;

    return 0;
}