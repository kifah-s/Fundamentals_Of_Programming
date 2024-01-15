

/* >>> Sum 3 Numbers Program ( Version 3 ) <<< */

/* >>> The given program outputs "C++".Change the code to output each character Sum 3 Numbers. <<< */

#include <iostream>
#include <string>

using namespace std;

// ************ Global Variables ****************
// ************ End Global Variables ************

// **************** Functions *******************
void welcomeMassageFun();
void getNumbersFun(int num[]);
void sumNumbersFun(int num[], int sum);
// **************** End Functions ***************

int main()
{
    welcomeMassageFun();

    // ************ Variables ********************
    int number[3], sumNumbers = 0;
    // ************ End Variables ****************

    // **************** Functions ****************
    getNumbersFun(number);

    sumNumbersFun(number, sumNumbers);
    // **************** End Functions ************

    return 0;
}

// **************** Functions ********************
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sum 3 Numbers Program ( Version 3 ) .." << endl
         << endl;
}

// Get First numbers from user / Function.
void getNumbersFun(int num[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter number: ";
        cin >> num[i];
    }
    cout << endl;
}

// Sum numbers / Function.
void sumNumbersFun(int num[], int sum)
{
    for (int i = 0; i < 3; i++)
    {
        sum += num[i];
    }
    cout << "Sum Numbers = " << sum << endl
         << endl
         << endl;
}
// **************** End Functions ****************
