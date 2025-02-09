
//* Even Numbers Program (Version 1).

/*
* Write a program that takes input from the user for six integers and uses the for_each loop to display only the even numbers.

! Input:
! Please, enter six integers:
! int 1: 1
! int 2: 2
! int 3: 3
! int 4: 4
! int 5: 5
! int 6: 6

! Output:
! Even number: 2 4 6
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
    cout << "\n\nYou welcome in Even Numbers Program (Version 1) ..\n"
         << endl;
}

// Get Integers - Function.
vector<int> getIntegersFun()
{
    vector<int> myVec;
    int num = 0;

    cout << "Please, enter six integers:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "int " << i + 1 << ": ";
        cin >> num;

        myVec.push_back(num);
    }

    return myVec;
}

// Print Even Numbers - Fuction.
void printEvenNumbersFuc(int x)
{
    if (x % 2 == 0)
    {
        cout << x << " ";
    }
}

// Using For Each - Function.
void usingForEachFun(vector<int> myVec)
{
    for_each(myVec.begin(), myVec.end(), printEvenNumbersFuc);
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    printWelcomeMessageFun();
    myVector = getIntegersFun();
    cout << "\nEven Numbers: ";
    usingForEachFun(myVector);

    cout << "\n"
         << endl;
}
//* End Function ..
