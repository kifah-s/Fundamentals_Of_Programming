
//* Multiplication or Addition Program (Version 1).

/*
* Write a program that works with vectors x and y, each containing a set of numbers.
* The program should take a user input value z and check if there exist any pair of numbers (one from x and one from y)
* whose multiplication or addition is equal to zو
* If such a pair is found, print "Yes" along with the pair of numbers; otherwise, print "No".

! Input:
! Please enter a number: 5

! Output:
! Yes: 5, 1
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
    cout << "\n\nYou welcome in Multiplication or Addition Program (Version 1) ..\n"
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
    for (int i = 0; i < myVec_1.size() && found == false; i++)
    {
        for (int j = 0; j < myVec_2.size() && !found; j++)
        {
            if ((myVec_1[i] + myVec_2[j] == num) || (myVec_1[i] * myVec_2[j] == num))
            {
                cout << "\nYes : " << myVec_1[i] << " , " << myVec_2[j] << endl;
                found = true;
            }
        }
        // if (!found)
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
