
//* Maximum Program (Version 2).

/*
* Write a program that takes three numbers as input and determines the maximum among them.

! Input:
! Please, enter three numbers:
! num 1: 5
! num 2: 7
! num 3: 2

! Output:
! Maximum number: 7
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
    cout << "\n\nYou welcome in Maximum Program (Version 2) ..\n"
         << endl;
}

// Get Numbers - Function.
void getNumbersFun(int size, float arr[])
{
    cout << "Please, enter three numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "num " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Maximum - Function.
float maximumFun(int size, float arr[])
{
    float max = arr[0];
    for (int i = 1; i < size; i++)
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
    // Declare Variables.
    int size = 3;
    float numbers[size], maximum = 0;

    // Call Functions.
    printWelcomeMessageFun();
    getNumbersFun(size, numbers);
    maximum = maximumFun(size, numbers);

    cout << "Maximum: " << maximum;

    cout << "\n"
         << endl;
}
//* End Function ..
