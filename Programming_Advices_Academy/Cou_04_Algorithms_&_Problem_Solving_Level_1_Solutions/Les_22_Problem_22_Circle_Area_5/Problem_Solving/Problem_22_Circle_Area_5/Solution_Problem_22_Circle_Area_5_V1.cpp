#include <iostream>
#include <cmath>

using namespace std;

//* Structs

struct stDimensionsCircle
{
    const float PI = 3.14;
    float area = 0;
    float a = 0;
    float b = 0;
};

//* End Structs

//* Functions

void welcomeMessageFun()
{
    cout << "\n\nWelcome to the Problem Solving ..\n"
         << endl;
}

stDimensionsCircle readDimensionsCircleFun()
{
    stDimensionsCircle dieCir;

    cout << "Please, enter a: ";
    cin >> dieCir.a;
    cout << "Please, enter b: ";
    cin >> dieCir.b;

    return dieCir;
}

stDimensionsCircle calculateCircleAreaFun(stDimensionsCircle dieCir)
{
    dieCir.area = dieCir.PI * (pow(dieCir.b, 2) / 4) * ((2 * dieCir.a - dieCir.b) / (2 * dieCir.a + dieCir.b));

    return dieCir;
}

void printCircleAreaFun(stDimensionsCircle dieCir)
{
    cout << "\nCircle Area: " << dieCir.area << endl;
}

//* End Functions

int main()
{
    welcomeMessageFun();

    printCircleAreaFun(calculateCircleAreaFun(readDimensionsCircleFun()));

    cout << endl
         << endl;

    return 0;
}