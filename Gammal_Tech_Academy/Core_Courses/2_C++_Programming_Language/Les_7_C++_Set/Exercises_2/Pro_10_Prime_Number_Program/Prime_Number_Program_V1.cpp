

//* Prime Number Program (Version 1).

/*
* Develop a program that uses a set to store and automatically sort a sequence of integers entered by the user,
* Allow the user to input integers until they enter a prime number,
* Print the sorted set of unique integers.


! Input:
! Please, enter a number (enter a prime number to stop):
! Num 1: 4
! Num 2: 6
! Num 3: 8
! Num 4: 10
! Num 5: 3

! Output:
! Sorted Set Elemets: 4 6 8 10
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(set<int> mySet);

int main()
{
    // Declare Variables.
    set<int> mySet;

    // Call Functions.
    resultFun(mySet);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Prime Number Program (Version 1) ..\n"
         << endl;
}

// Prime Or Not - Function.
bool primeNumberFun(int num)
{
    bool prime = false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = true;
        }
    }

    return prime;
}

// Get Elements - Function.
set<int> getElements(set<int> mySet)
{
    int userInput = 0, i = 1;
    cout << "Please, enter a number (enter a prime number to stop):\n";
    cout << "num " << i << ": ";
    cin >> userInput;

    while (primeNumberFun(userInput))
    {
        i++;
        cout << "num " << i << ": ";
        mySet.insert(userInput);
        cin >> userInput;
    }

    return mySet;
}

// Print Elements - Function.
void printElementsFun(set<int> mySet)
{
    cout << "\nSorted Set Elemets: ";
    for (const int &value : mySet)
    {
        cout << value << " ";
    }
}

// Result - Function.
void resultFun(set<int> mySet)
{
    printWelcomeMessageFun();
    mySet = getElements(mySet);
    printElementsFun(mySet);

    cout << "\n\n"
         << endl;
}
//* End Function ..
