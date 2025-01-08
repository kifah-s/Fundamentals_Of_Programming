

//* Eligible To Vote Program (Version 1).

/*
* Write a program that asks the user for their age, stores it in an integer variable,
* and then prints a message based on whether they are eligible to vote (age 18 or older).

! Input:
! Please, enter your age: 21

! Output:
! You are eligible to vote!
*/

#include <iostream>

using namespace std;

void resultFun(int age);

int main()
{
    // Declare Variables.
    int myAge = 0;

    // Call Functions.
    resultFun(myAge);

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
    if (age >= 18)
    {
        cout << "\nYou are eligible to vote!\n\n"
             << endl;
    }
    else
    {
        cout << "\nYou are not eligible to vote!\n\n"
             << endl;
    }
}

// Result - Function.
void resultFun(int age)
{
    printWelcomeMessageFun();
    age = getAgeFun(age);
    eligibleToVoteFun(age);
}
//* End Function ..
