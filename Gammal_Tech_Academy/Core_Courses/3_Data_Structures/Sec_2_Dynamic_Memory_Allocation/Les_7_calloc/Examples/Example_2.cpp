
//*  Example 1 ..

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>
#include <stdlib.h>

using namespace std;

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 1 ..\n"
         << endl;
}

//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    int *ptr;
    ptr = (int *)calloc(5, 4);

    if (ptr != NULL)
    {
        cout << "Please, enter 5 elements:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "element " << i + 1 << ": ";
            cin >> ptr[i];
        }

        cout << "\nElements: ";
        for (int i = 0; i < 5; i++)
        {
            cout << ptr[i] << " ";
        }
    }
    else
    {
        cout << "Memory allocation failed.";
    }

    free(ptr);

    cout << endl
         << endl;

    return 0;
}
