
//* Pattern Of Characters Program (Version 1).

/*
* Write a program that takes a number as input from the user and prints a half pyramid pattern of alphabets,
* Thenumber represents the number of lines in the pyramid.


! Input:
! Please, enter a number: 4

! Output:
! A
! A B
! A B C
! A B C D
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

void resultFun(int num, char myChar);

int main()
{
    // Declare Variables.
    int number = 0;
    char myChar = 'A';

    // Call Functions.
    resultFun(number, myChar);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Pattern Of Characters Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
int getNumberFun(int num)
{
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Print Shape - Function.
void printShapeFun(int num, char myChar)
{
    num = getNumberFun(num);

    for (int i = 1; i <= num; i++)
    {
        myChar = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << myChar << " ";
            myChar++;
        }
        cout << "\n";
    }
}

// Result - Function.
void resultFun(int num, char myChar)
{
    printWelcomeMessageFun();
    printShapeFun(num, myChar);

    cout << "\n"
         << endl;
}
//* End Function ..
