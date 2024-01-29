
//* >>>>> Lesson Summary <<<<< *//

#include <iostream>
#include <ctime>
#include <stdlib.h>

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

    //* _____________________________________________________

    /*
    //* Note: calloc() function: is an array of malloc() function.

    //* Note: calloc(): Contiguous Allocation.
    */

    //* _____________________________________________________

    /*
    int *x = (int *)calloc(5, 4); //* 20 Byte.

    for (int i = 0; i < 5; i++)
    {
        x[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "  ";
    }

    free(x);
    */

    //* _____________________________________________________

    /*
    int *x = (int *)calloc(5, 4); //* 20 Byte.

    if (x != NULL)
    {
        for (int i = 0; i < 5; i++)
        {
            x[i] = i + 1;
        }

        for (int i = 0; i < 5; i++)
        {
            cout << x[i] << "  ";
        }
    }

    free(x);
    */

    //* _____________________________________________________

    cout << endl
         << endl;

    return 0;
}
