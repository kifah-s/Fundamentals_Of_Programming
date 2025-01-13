
//* Sorts Vector Program (Version 1).

/*
* Develop a program that asks the user to input 7 integers, stores them in a vector and sorts the vector.

! Input:
! Please, enter 7 numbers:
! num 1: 5
! num 2: 6
! num 3: 3
! num 4: 1
! num 5: 5
! num 6: 8
! num 7: 9

! Output:
! Sorted Vector: 1 3 5 5 6 8 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(vector<int> myVec);

int main()
{
    // Declare Variables.
    vector<int> myVector;

    // Call Functions.
    resultFun(myVector);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sorts Vector Program (Version 1) ..\n"
         << endl;
}

// Get Numbers - Function.
vector<int> getNumbersFun(vector<int> myVec)
{
    int num = 0;
    cout << "Please, enter 7 numbers:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "num " << i + 1 << ": ";
        cin >> num;

        myVec.push_back(num);
    }

    return myVec;
}

// Sort Vector - Function.
vector<int> sortVectorFun(vector<int> myVec)
{
    sort(myVec.begin(), myVec.end());

    return myVec;
}

// Result - Function.
void resultFun(vector<int> myVec)
{
    printWelcomeMessageFun();
    myVec = getNumbersFun(myVec);
    myVec = sortVectorFun(myVec);

    cout << "Sorted Vector: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
