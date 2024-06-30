

/* >>> Sum 3 Numbers Program ( Version 1 ) <<< */

/* >>> The given program outputs "C++".Change the code to output each character Sum 3 Numbers. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************
void welcomeMassageFun();
int getFirstNumFun(int num_1);
int getSecondNumFun(int num_2);
int getThirdNumFun(int num_3);
void sumNumbersFun(int num_1, int num_2, int num_3, int sum);
// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************
    int firstNum = 0,
        secondNum = 0,
        thirdNum = 0,
        sumNumbers = 0;
    // ************ End Variables ****************

    // **************** Functions ****************
    firstNum = getFirstNumFun(firstNum);
    secondNum = getSecondNumFun(secondNum);
    thirdNum = getThirdNumFun(thirdNum);

    sumNumbersFun(firstNum, secondNum, thirdNum, sumNumbers);
    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sum 3 Numbers Program ( Version 1 ) .." << endl
         << endl;
}

// Get First numbers from user / Function.
int getFirstNumFun(int num_1)
{
    cout << "Please enter First number: ";
    cin >> num_1;

    return num_1;
}

// Get Second numbers from user / Function.
int getSecondNumFun(int num_2)
{
    cout << "Please enter Second number: ";
    cin >> num_2;

    return num_2;
}

// Get Third numbers from user / Function.
int getThirdNumFun(int num_3)
{
    cout << "Please enter Third number: ";
    cin >> num_3;

    cout << endl;

    return num_3;
}

// Sum numbers / Function.
void sumNumbersFun(int num_1, int num_2, int num_3, int sum)
{
    sum = num_1 + num_2 + num_3;
    cout << "Sum numbers = " << sum << endl
         << endl
         << endl;
}
// **************** End Functions ****************
