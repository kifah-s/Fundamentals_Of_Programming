

//* First and Last Elements Program (Version 1).

/*
* write a program to Add the elements 5, 9, 200, and -3 to
* a vector Print the first and last elements of a vector.

! Output:
! First Element in vector: 5
! Last Element in vector: -3
*/

#include <iostream>
#include <array>
#include <vector>

using namespace std;

void resultFun(vector<int> myNums, int firEle, int lasEle);

int main()
{
    // Declare Variables.
    vector<int> myNumbers;
    int firstElement = 0, lastElement = 0;

    // Call Functions.
    resultFun(myNumbers, firstElement, lastElement);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in First and Last Elements Program (Version 1) ..\n"
         << endl;
}

// Add Elements - Function.
vector<int> addElementsFun(vector<int> myNums)
{
    myNums.push_back(5);
    myNums.push_back(9);
    myNums.push_back(200);
    myNums.push_back(-3);

    return myNums;
}

// Print First and Last Elements - Function.
void printFirstAndLastElementsFun(vector<int> myNums, int firEle, int lasEle)
{
    // firEle = myNums[0];
    firEle = myNums.front();

    // lasEle = myNums[3];
    // lasEle = myNums[myNums.size() - 1];
    lasEle = myNums.back();

    cout << "First element in vector: " << firEle;
    cout << "\nLast element in vector: " << lasEle;
}

// Result - Function.
void resultFun(vector<int> myNums, int firEle, int lasEle)
{
    printWelcomeMessageFun();
    myNums = addElementsFun(myNums);
    printFirstAndLastElementsFun(myNums, firEle, lasEle);

    cout << "\n\n"
         << endl;
}
//* End Function ..
