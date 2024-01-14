
//* >>>>> Sum Numbers Program (Version 2) <<<<< */

/* >>> A program that asks the user to enter a number and prints the sum of the numbers from 1 to that number.

- Example:
   input:
   8
   output:
   36 <<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Exercises / Function.
void exercisesFun()
{
    cout << endl
         << "Sum Numbers Program (Version 2) .." << endl
         << endl;
}

// Recursion Function.
int recursionFun(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        x = x + recursionFun(x - 1);

        return x;
    }
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

    // Print Sum.
    cout << endl
         << "Sum: " << recursionFun(num)
         << endl;

    cout << endl;

    return 0;
}
