#include <iostream>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

int calculateRectangleArea(int wid, int hei)
{
    int area = wid * hei;

    return area;
}

//* End Functions

int main()
{
    welcomeMessage();

    int width = 0, height = 0;

    cout << "Please, enter a width: ";
    cin >> width;

    cout << "Please, enter a height: ";
    cin >> height;

    int area = calculateRectangleArea(width, height);

    cout << "\nRectangle Area: " << area << endl;

    cout << endl
         << endl;

    return 0;
}