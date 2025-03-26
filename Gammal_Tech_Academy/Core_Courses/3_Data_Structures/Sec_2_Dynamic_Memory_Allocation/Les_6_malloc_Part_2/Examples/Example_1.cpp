
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

    // Declare Pointer and Variables.
    int *arrPtr, size = 5;
    arrPtr = (int *)malloc(size * sizeof(int));

    if (arrPtr == NULL)
    {
        cout << "Memory Not Allocated." << endl;
    }

    cout << "Please, enter " << size << " number: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> arrPtr[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << arrPtr[i] << " ";
    }

    free(arrPtr);

    cout << endl
         << endl;

    return 0;
}
