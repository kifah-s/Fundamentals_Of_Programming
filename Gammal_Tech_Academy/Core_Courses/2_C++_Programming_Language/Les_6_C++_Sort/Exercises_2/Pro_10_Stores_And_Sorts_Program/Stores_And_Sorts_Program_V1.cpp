

//* Stores And Sorts Program (Version 1).

/*
* Develop a program that asks the user to input 7 integers,
* stores them in a vector and sorts the vector.

! Input:
! Please, Enter 7 numbers:
! Num 1: 5
! Num 2: 6
! Num 3: 3
! Num 4: 1
! Num 5: 5
! Num 6: 8
! Num 7: 9

! Output:
! Sorted Vector: 1 3 5 5 6 8 9
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

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
    cout << "\n\nYou welcome in Stores And Sorts Program (Version 1) ..\n"
         << endl;
}

// Get Elements - Function.
vector<int> getElementsFun(vector<int> myVec)
{
    int num = 0;

    cout << "Please, enter 7 Numbers:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> num;
        
        myVec.push_back(num);
    }

    return myVec;
}

// Sort Vector - Function.
void sortVectorFun(vector<int> myVec)
{
    sort(myVec.begin(), myVec.end());

    cout << "\nSorted Vector: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}

// Result - Function.
void resultFun(vector<int> myVec)
{
    printWelcomeMessageFun();
    myVec = getElementsFun(myVec);
    sortVectorFun(myVec);

    cout << "\n\n"
         << endl;
}
//* End Function ..
