

//* Sort And Sum Program (Version 1).

/*
* Develop a program that sorts a vector of integers in ascending order and then calculates the sum of the sorted elements,
* The vector intVector is initially {5, 2, 8, 1, 7}.

! Output:
! Sorted Vector: 1 2 5 7 8
! Sum Elemets: 23
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void resultFun(vector<int> myVec, int sum);

int main()
{
    // Declare Variables.
    vector<int> myVector = {5, 2, 8, 1, 7};
    int sumElements = 0;

    // Call Functions.
    resultFun(myVector, sumElements);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Sort And Sum Program (Version 1) ..\n"
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

// Sum Elements - Function.
int sumElementsFun(vector<int> myVec, int sum)
{
    for (int i = 0; i < myVec.size(); i++)
    {
        sum = sum + myVec[i];
    }

    return sum;
}

// Result - Function.
void resultFun(vector<int> myVec, int sum)
{
    printWelcomeMessageFun();
    sortVectorFun(myVec);
    sum = sumElementsFun(myVec, sum);

    cout << "\nSum Elemets: " << sum << "\n\n"
         << endl;
}
//* End Function ..
