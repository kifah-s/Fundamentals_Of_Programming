
//* Product or Sum 2 Program (Version 1).

/*
* Modify the previous program to handle cases where there are multiple pairs of numbers whose product or sum is equal to the user-entered value z.
* Print all such pairs if they exist; otherwise, print "No".

! Input:
! Please enter a number: 6

! Output:
! Yes: 2, 4 OR 2, 8 OR 2, 4
! Yes: 5, 1 OR 5, 11 OR 5, 6
! Yes: 3, 3 OR 3, 9 OR 3, 2
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
    cout << "\n\nYou welcome in Product or Sum 2 Program (Version 1) ..\n"
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
        if (find(myVec_2.begin(), myVec_2.end(), myVec_1[i] - myVec_2[i] == num) != myVec_2.end() || find(myVec_2.begin(), myVec_2.end(), myVec_1[i] + myVec_2[i] == num) != myVec_2.end() || find(myVec_2.begin(), myVec_2.end(), myVec_1[i] + myVec_2[i] == num) != myVec_2.end())
        {
            cout << "\nYes : " << myVec_1[i] << " , " << num - myVec_1[i] << " OR " << myVec_1[i] << " , " << num + myVec_1[i] << " OR " << myVec_1[i] << " , " << num * myVec_1[i] << endl;
            found = true;
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
    vector<int> myVector_1 = {2, 5, 3, 8, 10},
                myVector_2 = {4, 6, 2, 5, 1};

    // Call Functions.
    myNumber = getNumberFun(myNumber);
    findPairOfNumbersFun(myNumber, myVector_1, myVector_2);

    cout << "\n"
         << endl;
}
//* End Function ..
