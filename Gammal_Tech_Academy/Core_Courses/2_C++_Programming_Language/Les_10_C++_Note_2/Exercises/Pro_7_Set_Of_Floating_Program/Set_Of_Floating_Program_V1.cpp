
//* Set Of Floating Program (Version 1).

/*
* Write a program that uses a set to store and automatically sort a sequence of floating-point numbers,
* Insert the values 3.5, 1.2, 2.8, 4.0, and 1.2 into the set.


! Output:
! Sorted Set Elements: 1.2 2.8 3.5 4
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<float> mySet);

int main()
{
    // Declare Variables.
    set<float> mySet = {3.5, 1.2, 2.8, 4.0, 1.2};

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Set Of Floating Program (Version 1) ..\n"
         << endl;
}

// Result - Function.
void resultFun(set<float> mySet)
{
    printWelcomeMessageFun();

    for (const float &value : mySet)
    {
        cout << value << " ";
    }

    cout << "\n"
         << endl;
}
//* End Function ..
