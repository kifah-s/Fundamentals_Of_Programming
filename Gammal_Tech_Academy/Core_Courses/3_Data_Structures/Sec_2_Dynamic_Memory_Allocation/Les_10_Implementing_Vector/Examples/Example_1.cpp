
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

    // Declare Variables and Pointer.
    int numberOfNumbers = 0, newNumber = 0;
    int *pointerToVector;

    cout << "Please, enter the number of number: ";
    cin >> numberOfNumbers;

    pointerToVector = (int *)calloc(numberOfNumbers, sizeof(int));

    cout << "Please, enter a numbers: " << endl;
    for (int i = 0; i < numberOfNumbers; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> pointerToVector[i];
    }

    do
    {
        cout << "Please, enter another number OR (0 to exit): ";
        cin >> newNumber;

        pointerToVector = (int *)realloc(pointerToVector, (numberOfNumbers + 1) * 4);
        pointerToVector[numberOfNumbers] = newNumber;
        numberOfNumbers++;
    } while (newNumber != 0);

    // numberOfNumbers--;
    cout << "\nNumber: ";
    for (int i = 0; i < numberOfNumbers - 1; i++)
    {
        cout << pointerToVector[i] << " ";
    }

    free(pointerToVector);

    cout << endl
         << endl;

    return 0;
}
