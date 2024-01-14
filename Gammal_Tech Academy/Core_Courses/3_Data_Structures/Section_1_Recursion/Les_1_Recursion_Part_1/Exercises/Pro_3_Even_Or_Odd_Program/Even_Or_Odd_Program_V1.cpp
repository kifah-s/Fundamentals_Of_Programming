
//* >>>>> Even Or Odd Program (Version 1) <<<<< */

/* >>> A program that asks the user to enter a number and prints the odd numbers from 1 to this number on one line and the even numbers on another line.

- Example:
   input:
   8
   output
   1 3 5 7
   2 4 6 8 <<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Exercises / Function.
void exercisesFun()
{
    cout << endl
         << "Even Or Odd Program (Version 1) .." << endl
         << endl;
}

// Even / Recursion Function.
void evenRecFun(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        evenRecFun(x - 1);

        if (x % 2 == 0)
        {
            cout << x << " ";
        }
    }
}

// Odd Recursion Function.
void oddRecFun(int x)
{
    if (x == 0)
    {
        return;
    }
    else
    {
        oddRecFun(x - 1);

        if (x % 2 != 0)
        {
            cout << x << " ";
        }
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

    // Call recursion function.
    evenRecFun(num);
    cout << endl;
    oddRecFun(num);

    cout << endl;

    return 0;
}
