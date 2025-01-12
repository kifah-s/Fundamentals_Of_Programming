

//* Eligible To Vote Program (Version 1).

/*
* Write a program that asks the user for their age,
* stores it in an integer variable,
* and then prints a message based on whether they are eligible to vote (age 18 or older).


! Input:
! Please, enter your age: 21

! Output:
! you are eligible to vote.
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int age);

int main()
{
    // Declare Variables.
    int userAge = 0;

    // Call Functions.
    resultFun(userAge);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Eligible To Vote Program (Version 1) ..\n"
         << endl;
}

// Get Age - Function.
int getAgeFun(int age)
{
    cout << "Please, enter your age: ";
    cin >> age;

    return age;
}

// Eligible To Vote - Function.
void eligibleToVoteFun(int age)
{
    age = getAgeFun(age);

    if (age >= 18)
    {
        cout << "\nYou are eligible to vote.";
    }
    else
    {
        cout << "\nYou are not eligible to vote.";
    }
}

// Result - Function.
void resultFun(int age)
{
    printWelcomeMessageFun();
    eligibleToVoteFun(age);

    cout << "\n"
         << endl;
}
//* End Function ..
