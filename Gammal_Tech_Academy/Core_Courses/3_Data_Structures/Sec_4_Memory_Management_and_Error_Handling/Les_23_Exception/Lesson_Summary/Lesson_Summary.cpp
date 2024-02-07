
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

//* End Functions ..

int main()
{
    lessonSummaryFun();

    //* ---------------------------------------
    /*
    try
    {
        //* Code that may throw an exception
        throw 42; // Example: Throwing an integer

        //* The code here will not be executed if an exception is thrown
        cout << "This line will not be executed." << endl;
    }
    catch (int ex)
    {
        //* Catch block to handle the thrown exception
        cout << "Exception caught: " << ex << endl;
    }
    */

    //* ---------------------------------------

    /*
    int x = 5;

    try
    {
        if (x > 10)
        {
            throw x;
        }

        cout << "x < 10" << endl;
    }
    catch (int ex)
    {
        cout << "x > 10" << endl;
    }
    */

    //* ---------------------------------------

    cout << endl;

    return 0;
}
