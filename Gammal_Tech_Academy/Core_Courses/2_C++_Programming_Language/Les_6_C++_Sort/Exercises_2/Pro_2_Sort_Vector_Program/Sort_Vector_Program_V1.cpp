

//* Sort Vector Program (Version 1).

/*
* Develop a program to sort the elements of a vector in ascending order using the sort function,
* The vector y is initially {9, 8, 7, 6, 5}.

! Output:
! Sorted Vector: 5 6 7 8 9
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
    vector<int> myVector = {9, 8, 7, 6, 5};

    // Call Functions.
    resultFun(myVector);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Vector Program (Version 1) ..\n"
         << endl;
}

// Sort Vector - Function.
void sortVectorFun(vector<int> myVec)
{
    sort(myVec.begin(), myVec.end());

    cout << "Sorted Vector: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}

// Result - Function.
void resultFun(vector<int> myVec)
{
    printWelcomeMessageFun();
    sortVectorFun(myVec);

    cout << "\n\n"
         << endl;
}
//* End Function ..
