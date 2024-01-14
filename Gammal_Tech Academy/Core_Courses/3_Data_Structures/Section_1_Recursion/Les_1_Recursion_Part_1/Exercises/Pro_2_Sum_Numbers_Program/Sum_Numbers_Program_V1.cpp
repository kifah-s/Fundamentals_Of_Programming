
//* >>>>> Sum Numbers Program (Version 1) <<<<< */

/* >>> A program that asks the user to enter a number and prints the sum of the numbers from 1 to that number.

- Example:
   input:
   8
   output:
   36 <<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Global Variable ..

int sum = 0;

//* End Global Variable .

//* Functions ..

// Print Exercises / Function.
void exercisesFun()
{
    cout << endl
         << "Sum Numbers Program (Version 1) .." << endl
         << endl;
}

// Recursion Function.
void recursionFun(int x)
{
    if (x != 0)
    {
        sum = sum + x;
    }
    else
    {
        return;
    }

    recursionFun(x - 1);
}

//* End Functions ..

int main()
{
    exercisesFun();

    // Declare variable.
    int num = 0;

    // Receive value from user.
    cout << "Please enter a number: ";
    cin >> num;

    // Call recursion function.
    recursionFun(num);

    // Print Sum.
    cout << endl
         << "Sum = " << sum << endl;

    cout << endl;

    return 0;
}
