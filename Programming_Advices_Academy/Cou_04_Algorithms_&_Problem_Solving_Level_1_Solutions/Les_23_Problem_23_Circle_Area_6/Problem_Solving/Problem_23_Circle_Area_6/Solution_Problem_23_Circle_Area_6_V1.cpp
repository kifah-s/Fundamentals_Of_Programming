#include <iostream>
#include <cmath>

using namespace std;

//* Structs

struct stDimensionsCircle
{
    const float PI = 3.14;
    float area = 0;
    float p = 0;
    float a = 0;
    float b = 0;
    float c = 0;
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
    cout << "Please, enter c: ";
    cin >> dieCir.c;

    return dieCir;
}

stDimensionsCircle calculateCircleAreaFun(stDimensionsCircle dieCir)
{
    dieCir.p = (dieCir.a + dieCir.b + dieCir.c) / 2;

    dieCir.area = dieCir.PI * pow((dieCir.a * dieCir.b * dieCir.c) / (4 * sqrt(dieCir.p * (dieCir.p - dieCir.a) * (dieCir.p - dieCir.b) * (dieCir.p - dieCir.c))) , 2);

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