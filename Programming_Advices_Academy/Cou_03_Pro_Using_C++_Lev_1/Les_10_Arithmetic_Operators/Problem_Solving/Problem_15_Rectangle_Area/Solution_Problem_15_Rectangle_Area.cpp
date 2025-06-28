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

    float width = 0, hight = 0, area = 0;

    cout << "Please, enter width: ";
    cin >> width;
    
    cout << "Please, enter hight: ";
    cin >> hight;

    area = width * hight;

    cout << "\nArea: " << area << endl;

    cout << endl
         << endl;

    return 0;
}