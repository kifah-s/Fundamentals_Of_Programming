
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

    /*
    //* Reserve an array for 5 numbers in the normal way.
    int x[5]; //* 20 Byte.
    */

    //* __________________________________________________________

    /*
    int *x = (int *)malloc(20); //* 20 Byte.

    if (x != NULL)
    {
        //* Succeeded to allocate memory.
        cout << "Succeeded to allocate memory." << endl;

        //* Now you can use the array as needed.

        //* Always free the allocated memory when done using it.
        free(x);
    }
    else
    {
        //* Failed to allocate memory.
        cout << "Failed to allocate memory." << endl;
    }
    */

    //* __________________________________________________________

    //* The advantage of nothing "void" is that I can use it for anything.

    //* __________________________________________________________

    /*
    int *x = (int *)malloc(20); //* 20 Byte.

    if (x != NULL)
    {
        //* Succeeded to allocate memory.
        cout << "Succeeded to allocate memory." << endl;

        //* Use the array
        for (int i = 0; i < 5; ++i)
        {
            cout << i + 1 << endl;
        }

        //* Now you can use the array as needed.

        //* Always free the allocated memory when done using it.
        free(x);
    }
    else
    {
        //* Failed to allocate memory.
        cout << "Failed to allocate memory." << endl;
    }
    */

    //* __________________________________________________________


    




    cout << endl;

    return 0;
}
