
//* >>>>> Exercise 1: From 1 To Num <<<<< */

/* >>> A program that asks the user to enter a number and prints the numbers from 1 to that number.

- Example:
   input:
   8
   output:
   1 2 3 4 5 6 7 8 <<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Exercises / Function.
void exercisesFun()
{
    cout << endl
         << "Exercise 1: From 1 To Num .." << endl
         << endl;
}

// Recursion Function.
void recursionFun(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        recursionFun(x - 1);
        cout << x << endl;
    }
}

//* End Functions ..

int main()
{
    exercisesFun();

    recursionFun(5);

    cout << endl
         << endl;

    return 0;
}
