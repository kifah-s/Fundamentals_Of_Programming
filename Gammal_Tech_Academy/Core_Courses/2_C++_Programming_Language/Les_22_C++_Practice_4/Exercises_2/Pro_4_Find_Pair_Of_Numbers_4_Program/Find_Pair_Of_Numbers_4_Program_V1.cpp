
//* Find Pair Of Numbers 4 Program (Version 1).

/*
* Enhance the previous program to handle cases where the division result is not an integer,
* If there are multiple pairs with non-integer division results, print all such pairs; otherwise, print "No".

! Input:
! Please enter a number: 0.75

! Output:
! Yes: 15, 20
! Yes: 6, 8
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
    cout << "\n\nYou welcome in Find Pair Of Numbers 4 Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
double getNumberFun(double num)
{
    cout << "Please enter a number: ";
    cin >> num;

    return num;
}

// Find Pair Of Numbers - Function.
void findPairOfNumbersFun(double num, vector<double> myVec_1, vector<double> myVec_2)
{
    bool found = false;
    for (int i = 0; i < myVec_1.size(); i++)
    {
        for (int j = 0; j < myVec_2.size(); j++)
        {
            if (myVec_1[i] / myVec_2[j] == num)
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
    double myNumber = 0;
    vector<double> myVector_1 = {10.0, 15.0, 13.0, 6.0, 4.0, -3.0, 5.0},
                myVector_2 = {2.0, 4.0, 6.0, 8.0, 20.0, -16.0, 9.0};

    // Call Functions.
    myNumber = getNumberFun(myNumber);
    findPairOfNumbersFun(myNumber, myVector_1, myVector_2);

    cout << "\n"
         << endl;
}
//* End Function ..
