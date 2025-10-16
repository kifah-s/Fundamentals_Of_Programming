#include <iostream>

using namespace std;

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

float readWidthFun()
{
    float width = 0;

    cout << "Please, enter width: ";
    cin >> width;

    return width;
}

float readHeightFun()
{
    float height = 0;

    cout << "Please, enter height: ";
    cin >> height;

    return height;
}

float calculateRectangleAreaFun(float width, float height)
{
    float rectangleArea = width * height;

    return rectangleArea;
}

void printRectangleAreaFun(float rectangleArea)
{
    cout << "\nRectangle Area: " << rectangleArea << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printRectangleAreaFun(calculateRectangleAreaFun(readWidthFun(), readHeightFun()));

    cout << endl
         << endl;

    return 0;
}