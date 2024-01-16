
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>

using namespace std;

//* Functions ..
// Print Lesson Summary / Function.
void lessonSummaryFun()
{
    cout << "\nLesson Summary ..\n\n";
}

// Fibonacci / Recursive Function.
int fibonacciRecFun(int x)
{
    if (x < 2)
    {
        return x;
    }
    else
    {
        return fibonacciRecFun(x - 1) + fibonacciRecFun(x - 2);
    }
}
//* End Functions ..

int main()
{
    lessonSummaryFun();

    // Declare Variable.
    int x = 6;

    // Call recursive function and print value.
    cout << "Fibo " << x << ": " << fibonacciRecFun(x);

    cout << "\n\n";

    return 0;
}

//* Notes:
/*
 * Recursive function:
 * Two things:
 *   - When do I stop ? (Base Case)
 *   - What will I repeat ? (Recursive Procedure)
*/

/*
 *Fibonacci sequence:

 * Num:   0 1 2 3 4 5 6
 * Fib:   0 1 1 2 3 5 8
*/

