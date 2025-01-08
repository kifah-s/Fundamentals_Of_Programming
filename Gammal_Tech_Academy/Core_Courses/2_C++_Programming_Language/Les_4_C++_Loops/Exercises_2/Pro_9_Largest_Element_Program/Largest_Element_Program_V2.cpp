

//* Largest Element Program (Version 2).

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

void resultFun(const int s, int myNums[], int larEle);

int main()
{
    // Declare Variables.
    const int size = 5;
    int myNumbers[size], largestElement = 0;

    // Call Functions.
    resultFun(size, myNumbers, largestElement);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Largest Element Program (Version 2) ..\n"
         << endl;
}

// Get Numbers - Function.
void getNumbersFun(const int s, int myNums[])
{
    cout << "Please, enter 5 numbers:\n";
    for (int i = 0; i < s; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> myNums[i];
    }
}

// Largest Element - Function.
int largestElementFun(const int s, int myNums[], int larEle)
{
    larEle = myNums[0];
    for (int i = 0; i < s; i++)
    {
        if (myNums[i] > larEle)
        {
            larEle = myNums[i];
        }
    }

    return larEle;
}

// Result - Function.
void resultFun(const int s, int myNums[], int larEle)
{
    printWelcomeMessageFun();
    getNumbersFun(s, myNums);
    larEle = largestElementFun(s, myNums, larEle);

    cout << "\nLargest Element: " << larEle << "\n\n"
         << endl;
}
//* End Function ..
