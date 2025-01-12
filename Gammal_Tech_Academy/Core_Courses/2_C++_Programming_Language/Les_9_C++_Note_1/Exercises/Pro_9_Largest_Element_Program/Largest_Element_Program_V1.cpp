
//* Largest Element Program (Version 1).

/*
* Create a program to find the largest element in an array of 5 integers using a for.


! Input:
! Please, enter 5 numbers:
! num 1: 6
! num 2: 9
! num 3: 5
! num 4: 2
! num 5: 1

! Output:
! Largest element: 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int nums[], int larEle);

int main()
{
    // Declare Variables.
    int numbers[5], largestElement = 0;

    // Call Functions.
    resultFun(numbers, largestElement);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Largest Element Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
void getElementsFun(int nums[])
{
    cout << "Please, enter 5 number:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "num " << i + 1 << ": ";
        cin >> nums[i];
    }
}

// Largest Element - Function.
int largestElementFun(int nums[], int larEle)
{
    getElementsFun(nums);

    larEle = nums[0];
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] > larEle)
        {
            larEle = nums[i];
        }
    }

    return larEle;
}

// Result - Function.
void resultFun(int nums[], int larEle)
{
    printWelcomeMessageFun();
    larEle = largestElementFun(nums, larEle);

    cout << "\nLargest Element: " << larEle;

    cout << "\n"
         << endl;
}
//* End Function ..
