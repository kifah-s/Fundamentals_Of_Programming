
//* Generic Function Maximum Value Program (Version 1).

/*
* Enhance the previous program to accept user input for an array of integers and an array of floats.
* Utilize the generic function to find and print the maximum value in each array.
* Provide the program code and the output.

! Input & Output:
! Please enter 5 integers:
! Num 1: 1
! Num 2: 5
! Num 3: 9
! Num 4: 0
! Num 5: 2
! Maximum in integer array: 9

! Please enter 5 floats:
! Num 1: 2.3
! Num 2: 3.5
! Num 3: 6.3
! Num 4: 5.8
! Num 5: 3.7
! Maximum in float array: 6.3
*/

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

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Generic Function Maximum Value Program (Version 1) ..\n"
         << endl;
}

// Get Array Of Integer - Function.
void getArrayOfIntegerFun(int arr[], int s)
{
    cout << "Please enter 5 integers: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Get Array Of Float - Function.
void getArrayOfFloatFun(float arr[], int s)
{
    cout << "Please enter 5 floats: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Create Template.
template <typename T>

// Maximum Value - Function.
T maximumValueFun(T arr[], int s)
{
    T max = arr[0];

    for (int i = 1; i < s; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int size = 5;
    int myArray1[size], intMaximumValue;
    float myArray2[size], floatMaximumValue;

    // Call Functions.
    getArrayOfIntegerFun(myArray1, size);
    intMaximumValue = maximumValueFun(myArray1, size);
    cout << "Maximum in integer array: " << intMaximumValue << "\n"
         << endl;

    getArrayOfFloatFun(myArray2, size);
    floatMaximumValue = maximumValueFun(myArray2, size);
    cout << "Maximum in float array: " << floatMaximumValue << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
