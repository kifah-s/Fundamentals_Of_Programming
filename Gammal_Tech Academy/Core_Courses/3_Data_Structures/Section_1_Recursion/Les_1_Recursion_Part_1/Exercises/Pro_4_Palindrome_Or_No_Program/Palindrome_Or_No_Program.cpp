
//* >>>>> Palindrome Or No Program <<<<< */

/* >>> A program that asks the user to enter a number and determine if it is a palindrome or not.

- Example:
   input:
   145
   output:
   No

  input:
   252
   output:
   Yes <<< */

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..

// Print Exercises / Function.
void exercisesFun()
{
    cout << endl
         << "Palindrome Or No Program .." << endl
         << endl;
}

// Palindrome Or No / Recursion Function.
void palindromeOrNoFun(int x)
{
    bool f = false;
    int deg = x / 10;

    if (x == 0)
    {
        return;
    }
    else
    {
        cout << x << endl;
    }

    palindromeOrNoFun(x / 10);
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
    palindromeOrNoFun(num);

    cout << endl;

    return 0;
}
