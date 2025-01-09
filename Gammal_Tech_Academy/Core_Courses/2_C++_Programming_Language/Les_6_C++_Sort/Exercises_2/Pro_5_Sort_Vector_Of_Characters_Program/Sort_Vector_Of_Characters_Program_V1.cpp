

//* Sort Vector Of Characters Program (Version 1).

/*
* Develop a program that sorts a vector of characters in ascending order,
* The vector charVector is initially {'c', 'a', 'b', 'z'}.

! Output:
! Sorted Vector Of Characters: a b c z
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void resultFun(vector<char> myVec);

int main()
{
    // Declare Variables.
    vector<char> myVector = {'c', 'a', 'b', 'z'};

    // Call Functions.
    resultFun(myVector);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Vector Of Characters Program (Version 1) ..\n"
         << endl;
}

// Sort Vector - Function.
void sortVectorFun(vector<char> myVec)
{
    sort(myVec.begin(), myVec.end());

    cout << "Sorted Vector Of Characters: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}

// Result - Function.
void resultFun(vector<char> myVec)
{
    printWelcomeMessageFun();
    sortVectorFun(myVec);

    cout << "\n\n"
         << endl;
}
//* End Function ..
