#include <iostream>
#include <cmath>

using namespace std;

//* Structs

struct stDimensionsTriangle
{
    float a = 0;
    float h = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stDimensionsTriangle readDimensionsTriangleFun()
{
    stDimensionsTriangle dieTri;

    cout << "Please, enter a: ";
    cin >> dieTri.a;

    cout << "Please, enter h: ";
    cin >> dieTri.h;

    return dieTri;
}

float calculateTriangleAreaFun(stDimensionsTriangle dieTri)
{
    float TriangleArea = (dieTri.a / 2) * dieTri.h;

    return TriangleArea;
}

void printTriangleAreaFun(float TriangleArea)
{
    cout << "\nTriangle Area: " << TriangleArea << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printTriangleAreaFun(calculateTriangleAreaFun(readDimensionsTriangleFun()));

    cout << endl
         << endl;

    return 0;
}