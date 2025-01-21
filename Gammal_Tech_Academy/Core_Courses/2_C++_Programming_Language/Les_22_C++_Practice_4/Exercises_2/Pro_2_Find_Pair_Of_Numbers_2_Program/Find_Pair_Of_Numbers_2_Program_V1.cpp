
//* Find Pair Of Numbers 2 Program (Version 1).

/*
* Modify the previous program to handle cases where there are multiple pairs of numbers whose sum is equal to the user-entered value z,
* Print all such pairs if they exist; otherwise, print "No".

! Input:
! Please enter a number: 15

! Output:
! Yes: 13, 2
! Yes: 6, 9
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
    cout << "\n\nYou welcome in Find Pair Of Numbers 2 Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please enter a number: ";
    cin >> num;

    return num;
}

// Find Pair Of Numbers - Function.
void findPairOfNumbersFun(int num, vector<int> myVec_1, vector<int> myVec_2)
{
    bool found = false;
    for (int i = 0; i < myVec_1.size(); i++)
    {
        for (int j = 0; j < myVec_2.size(); j++)
        {
            if (myVec_1[i] + myVec_2[j] == num)
            {
                cout << "\nYes : " << myVec_1[i] << " , " << myVec_2[j] << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "\nNo" << endl;
    }
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variables.
    int myNumber = 0;
    vector<int> myVector_1 = {10, 15, 13, 6, 4, -3, 5},
                myVector_2 = {2, 4, 6, 8, 20, -16, 9};

    // Call Functions.
    myNumber = getNumberFun(myNumber);
    findPairOfNumbersFun(myNumber, myVector_1, myVector_2);

    cout << "\n"
         << endl;
}
//* End Function ..
