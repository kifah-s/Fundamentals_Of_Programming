
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..
// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << endl
         << "Lesson Summary .." << endl
         << endl;
}

// Power / Recursion Function.
int powerRecFun(int x, int y)
{
    //* Base Case.
    if (y == 0)
    {
        return 1;
    }

    //* Recursion Procedure.
    int z = powerRecFun(x, y / 2);

    z *= z;

    if (y % 2 == 1)
    {
        z *= x;
    }

    return z;
}
//* End Functions ..

int main()
{
    lessonSummaryFun();

    //* Declare Variables.
    int num = 2, pow = 10;
    int result = 1;

    //* Case 1: For Loop.
    /*
    for (int i = 0; i < pow; i++) //* 10 Procedures.
    {
        result = result * num;
    }
    cout << "Result: " << result << endl;
    */

    //* Case 2: Recursion Function.
    cout << "Result: " << powerRecFun(num, pow) << endl; //* 5 Procedures.

    cout << endl;

    return 0;
}

//* Notes:
/*
 * 2 pow 100
 * 2 pow 50 * 2 pow 50
 * 2 pow 25 * 2 pow 25 * 2 pow 25 * 2 pow 25
 */

/*
 * Recursion Function:

 * 1. Base Case: pow 0.
 * 2. Recursion Procedure: pow / 2.
 */