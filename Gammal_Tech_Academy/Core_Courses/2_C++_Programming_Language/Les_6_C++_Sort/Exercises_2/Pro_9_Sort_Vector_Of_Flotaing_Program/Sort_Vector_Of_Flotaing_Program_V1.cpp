

//* Sort Vector Of Flotaing Program (Version 1).

/*
* Create a program that sorts a vector of floating-point numbers in descending order,
* The vector floatVector is initially {3.14, 2.71, 1.618, 2.718}.

! Output:
! Sorted Vector Of Floating in Descending Order: 3.14 2.718 2.71 1.618
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
void resultFun(vector<float> myVec);

int main()
{
    // Declare Variables.
    vector<float> myVector = {3.14, 2.71, 1.618, 2.718};

    // Call Functions.
    resultFun(myVector);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort Vector Of Flotaing Program (Version 1) ..\n"
         << endl;
}

// Sort Vector - Function.
void sortVectorFun(vector<float> myVec)
{
    sort(myVec.begin(), myVec.end(), greater<float>());

    cout << "Sorted Vector Of Floating in Descending Order: ";
    for (int i = 0; i < myVec.size(); i++)
    {
        cout << myVec[i] << " ";
    }
}

// Result - Function.
void resultFun(vector<float> myVec)
{
    printWelcomeMessageFun();
    sortVectorFun(myVec);

    cout << "\n\n"
         << endl;
}
//* End Function ..
