#include <iostream>
#include <cmath>

using namespace std;

//* Structs

struct stDimensionsRectangle
{
    float a = 0;
    float d = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stDimensionsRectangle readDimensionsRectangleFun()
{
    stDimensionsRectangle dieRec;

    cout << "Please, enter a: ";
    cin >> dieRec.a;
    cout << "Please, enter d: ";
    cin >> dieRec.d;

    return dieRec;
}

float calculateRectangleAreaFun(stDimensionsRectangle dieRec)
{
    float rectangleArea = dieRec.a * sqrt(pow(dieRec.d, 2) - pow(dieRec.a, 2));

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

    printRectangleAreaFun(calculateRectangleAreaFun(readDimensionsRectangleFun()));

    cout << endl
         << endl;

    return 0;
}