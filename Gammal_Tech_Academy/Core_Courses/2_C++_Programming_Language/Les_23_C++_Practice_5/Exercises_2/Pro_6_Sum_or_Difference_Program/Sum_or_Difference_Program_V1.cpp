
//* Sum or Difference Program (Version 1).

/*
* Write a program that works with vectors x and y, each containing a set of numbers. The program should take a user input value z,
* and check if there exists any pair of numbers (one from x and one from y) whose sum or difference is equal to z,
* If such a pair is found, print "Yes" along with the pair of numbers; otherwise, print "No".

! Input:
! Please enter a number: 6

! Output:
! Yes: 10, -4 OR 10, 16 
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
    cout << "\n\nYou welcome in Sum or Difference Program (Version 1) ..\n"
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
        if (find(myVec_2.begin(), myVec_2.end(), num - myVec_1[i]) != myVec_2.end() || find(myVec_2.begin(), myVec_2.end(), num + myVec_1[i]) != myVec_2.end())
        {
            cout << "\nYes : " << myVec_1[i] << " , " << num - myVec_1[i] << " OR " << myVec_1[i] << " , " << num + myVec_1[i] << endl;
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
    vector<int> myVector_1 = {10, 15, 13, 6, 4, 3, 5},
                myVector_2 = {2, 4, 6, 8, 20, 16, 9};

    // Call Functions.
    myNumber = getNumberFun(myNumber);
    findPairOfNumbersFun(myNumber, myVector_1, myVector_2);

    cout << "\n"
         << endl;
}
//* End Function ..
