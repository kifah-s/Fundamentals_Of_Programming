#include <iostream>
#include <cmath>

using namespace std;

//* Structs

struct stDimensionsCircle
{
    const float PI = 3.14;
    float r = 0;
    float area = 0;
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

    cout << "Please, enter r: ";
    cin >> dieCir.r;

    return dieCir;
}

stDimensionsCircle calculateCircleAreaFun(stDimensionsCircle dieCir)
{
    dieCir.area = dieCir.PI * pow(dieCir.r, 2);

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