
//* Squares Program (Version 1).

/*
* Create a program that takes input from the user for six integers and uses the for_each loop to display the squares of each number.

! Input:
! Please, enter six integers:
! int 1: 1
! int 2: 2
! int 3: 3
! int 4: 4
! int 5: 5
! int 6: 6

! Output:
! Square of 1: 1
! Square of 2: 4
! Square of 3: 9
! Square of 4: 16
! Square of 5: 25
! Square of 6: 36
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
    cout << "\n\nYou welcome in Squares Program (Version 1) ..\n"
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

// Print Square - Fuction.
void printSquareFuc(int x)
{
    int squ = x * x;
    cout << "\nSquare " << x << ": " << squ;
}

// Using For Each - Function.
void usingForEachFun(vector<int> myVec)
{
    for_each(myVec.begin(), myVec.end(), printSquareFuc);
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
