
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
    //* I can convert the "void" data type to any other data type.

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

    /*
    //* Reserve a place in memory.
    int *x = (int *)malloc(20); //* 20 Byte.

    if (x != NULL)
    {
        //* Succeeded to allocate memory.
        cout << "Succeeded to allocate memory." << endl;

        //* Fill values into the array.
        for (int i = 0; i < 5; i++)
        {
            x[i] = i + 1;
        }

        //* Print array.
        for (int i = 0; i < 5; i++)
        {
            cout << x[i] << endl;
        }

        //* Free the allocated memory.
        free(x);
    }
    else
    {
        //* Failed to allocate memory.
        cout << "Failed to allocate memory." << endl;
    }
    */

    //* __________________________________________________________

    /*
    cout << sizeof(int) << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(string) << endl;
    */

    //* __________________________________________________________

    /*
    //* Reserve a place in memory.
    // int *x = (int *)malloc(20); //* 20 Byte.
    int *x = (int *)malloc(5 * sizeof(int)); //* 20 Byte.

    if (x != NULL)
    {
        //* Succeeded to allocate memory.
        cout << "Succeeded to allocate memory." << endl;

        //* Fill values into the array.
        for (int i = 0; i < 5; i++)
        {
            x[i] = i + 1;
        }

        //* Print array.
        for (int i = 0; i < 5; i++)
        {
            cout << x[i] << endl;
        }

        //* Free the allocated memory.
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
