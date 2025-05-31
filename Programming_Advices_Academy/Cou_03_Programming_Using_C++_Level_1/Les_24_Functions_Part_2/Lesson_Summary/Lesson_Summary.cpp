#include <iostream>
#include <cmath>

using namespace std;

//* Functions

void welcomeMessage()
{
    cout << "\n\nWelcome to the Lesson Summary ..\n"
         << endl;
}

void myFunction()
{
    cout << "This is function" << endl;
}

string myFunction2()
{
    return "This is function 2";
}

int myFunction3()
{
    int num1 = 10, num2 = 20;

    int sum = num1 + num2;

    return sum;
}

float myFunction4()
{
    float num1 = 10.5, num2 = 20.2;

    float sum = num1 + num2;

    return sum;
}

//* End Functions

int main()
{
    welcomeMessage();

    myFunction();

    cout << myFunction2() << endl;

    cout << "Sum: " << myFunction3() << endl;

    int sum = myFunction3();
    cout << "Sum: " << sum << endl;

    int sum2 = myFunction3() + 50;
    cout << "Sum 2: " << sum2 << endl;

    float sum3 = myFunction4();
    cout << "Sum 3: " << sum3 << endl;

    float sum4 = floor(myFunction4());
    cout << "Sum 4: " << sum4 << endl;
    
    float sum5 = ceil(myFunction4());
    cout << "Sum 5: " << sum5 << endl;

    cout << endl
         << endl;

    return 0;
}