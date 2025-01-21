
//* Find Pair Of Numbers 5 Program (Version 1).

/*
* Enhance the previous program to handle cases where the division result is not an integer,
* If there are multiple pairs with non-integer division results, print all such pairs; otherwise, print "No".

! Input:
! Please enter a number: 15

! Output:
! Yes: 3, 5
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
    cout << "\n\nYou welcome in Find Pair Of Numbers 5 Program (Version 1) ..\n"
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
    for (int i = 0; i < myVec_1.size() && found != true; i++)
    {
        for (int j = 0; j < myVec_2.size() && !found; j++)
        {
            if (myVec_1[i] * myVec_2[j] == num)
            {
                cout << "\nYes : " << myVec_1[i] << " , " << myVec_2[j] << endl;
                found = true;
            }
        }
        // if (found)
        // {
        //     break;
        // }
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
    vector<int> myVector_1 = {2, 5, 3, 8, 10},
                myVector_2 = {4, 6, 2, 5, 1};

    // Call Functions.
    myNumber = getNumberFun(myNumber);
    findPairOfNumbersFun(myNumber, myVector_1, myVector_2);

    cout << "\n"
         << endl;
}
//* End Function ..
