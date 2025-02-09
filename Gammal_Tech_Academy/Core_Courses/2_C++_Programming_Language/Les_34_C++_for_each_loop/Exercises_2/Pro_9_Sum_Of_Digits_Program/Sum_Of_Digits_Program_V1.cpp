
//* Sum Of Digits Program (Version 1).

/*
* Write a program that takes input from the user for eight integers and uses the for_each loop to display the sum of the digits for each number.

! Input:
! Please, enter eight integers:
! int 1: 1
! int 2: 12
! int 3: 123
! int 4: 456
! int 5: 789456
! int 6: 12
! int 7: 45
! int 8: 159

! Output:
! Sum of Digits for 1: 1
! Sum of Digits for 12: 3
! Sum of Digits for 123: 6
! Sum of Digits for 456: 15
! Sum of Digits for 789456: 39
! Sum of Digits for 12: 3
! Sum of Digits for 45: 9
! Sum of Digits for 159: 15
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
    cout << "\n\nYou welcome in Sum Of Digits Program (Version 1) ..\n"
         << endl;
}

// Get Integers - Function.
vector<int> getIntegersFun()
{
    vector<int> myVec;
    int num = 0;

    cout << "Please, enter eight integers:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "int " << i + 1 << ": ";
        cin >> num;

        myVec.push_back(num);
    }

    return myVec;
}

// Sum Digits - Function.
int sumDigitsFun(int num)
{
    int dig = 0, sumDig = 0;
    while (num != 0)
    {
        dig = num % 10;
        sumDig = sumDig + dig;
        num = num / 10;
    }

    return sumDig;
}

// Print - Fuction.
void printFuc(int x)
{
    int sumDig = sumDigitsFun(x);
    cout << "Sum of Digits for " << x << ": " << sumDig << endl;
}

// Using For Each - Function.
void usingForEachFun(vector<int> myVec)
{
    for_each(myVec.begin(), myVec.end(), printFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    printWelcomeMessageFun();
    myVector = getIntegersFun();
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
