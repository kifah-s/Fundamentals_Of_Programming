#include <iostream>

using namespace std;

//* Structs

struct stDimensionsRectangle
{
    float width = 0;
    float height = 0;
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

    cout << "Please, enter width: ";
    cin >> dieRec.width;
    cout << "Please, enter height: ";
    cin >> dieRec.height;

    return dieRec;
}

float calculateRectangleAreaFun(stDimensionsRectangle dieRec)
{
    float rectangleArea = dieRec.width * dieRec.height;

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