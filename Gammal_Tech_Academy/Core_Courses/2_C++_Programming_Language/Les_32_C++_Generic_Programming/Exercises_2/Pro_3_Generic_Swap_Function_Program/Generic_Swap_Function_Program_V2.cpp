
//* Generic Swap Function Program (Version 2).

/*
* Write a program that defines a generic swap function to exchange the values of two variables.
* Demonstrate the usage of the generic swap function with integers and characters.
* Provide the program code and the output.

! Output:
! Befor swapping integer: 10, 20
! Befor swapping character: A, B

! After swapping integer: 20, 10
! After swapping character: B, A
*/

#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <utility>
#include <map>
#include <cctype>
#include <fstream>

using namespace std;

void resultFun();

int main()
{
    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Generic Swap Function Program (Version 2) ..\n"
         << endl;
}

// Print Befor - Function.
void printBeforFun(int n1, int n2, char c1, char c2)
{
    cout << "Befor swapping integer: " << n1 << ", " << n2 << endl;
    cout << "Befor swapping character: " << c1 << ", " << c2 << "\n"
         << endl;
}

// Create Template.
template <typename T>

// Generic Swap - Function.
void genericSwapFun(T &val_1, T &val_2)
{
    T temp;

    temp = val_1;
    val_1 = val_2;
    val_2 = temp;
}

// Print After - Function.
void printAfterFun(int n1, int n2, char c1, char c2)
{
    cout << "After swapping integer: " << n1 << ", " << n2 << endl;
    cout << "After swapping character: " << c1 << ", " << c2 << "\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int num1 = 10, num2 = 20;
    char char1 = 'A', char2 = 'B';

    // Call Functions.
    printBeforFun(num1, num2, char1, char2);
    genericSwapFun(num1, num2);
    genericSwapFun(char1, char2);
    printAfterFun(num1, num2, char1, char2);

    cout << "\n"
         << endl;
}
//* End Function ..
