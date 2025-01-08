

//* Largest Element Program (Version 1).

/*
* Create a program to find the largest element in an array of 5 integers using a for.

! Input:
! Please, enter 5 numbers:
! Num 1: 6
! Num 2: 9
! Num 3: 5
! Num 4: 2
! Num 5: 1

! Output:
! Largest Element: 9
*/

#include <iostream>
#include <array>

using namespace std;

void resultFun(int myNums[], int larEle);

int main()
{
    // Declare Variables.
    int myNumbers[5], largestElement = 0;

    // Call Functions.
    resultFun(myNumbers, largestElement);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Largest Element Program (Version 1) ..\n"
         << endl;
}

// Get Numbers - Function.
void getNumbersFun(int myNums[])
{
    cout << "Please, enter 5 numbers:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> myNums[i];
    }
}

// Largest Element - Function.
int largestElementFun(int myNums[], int larEle)
{
    larEle = myNums[0];
    for (int i = 0; i < 5; i++)
    {
        if (myNums[i] > larEle)
        {
            larEle = myNums[i];
        }
    }

    return larEle;
}

// Result - Function.
void resultFun(int myNums[], int larEle)
{
    printWelcomeMessageFun();
    getNumbersFun(myNums);
    larEle = largestElementFun(myNums, larEle);

    cout << "\nLargest Element: " << larEle << "\n\n"
         << endl;
}
//* End Function ..
