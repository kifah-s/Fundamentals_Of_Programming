
//* Generic Swap Function Program (Version 1).

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
    cout << "\n\nYou welcome in Generic Swap Function Program (Version 1) ..\n"
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

// Result - Function.
void resultFun()
{
    // Call Functions.
    printWelcomeMessageFun();

    // Declare Variable.
    int num1 = 10, num2 = 20;
    char char1 = 'A', char2 = 'B';

    cout << "Befor swapping integer: " << num1 << ", " << num2 << endl;
    cout << "Befor swapping character: " << char1 << ", " << char2 << "\n"
         << endl;

    // Call Functions.
    genericSwapFun(num1, num2);
    genericSwapFun(char1, char2);

    cout << "After swapping integer: " << num1 << ", " << num2 << endl;
    cout << "After swapping character: " << char1 << ", " << char2 << endl;

    cout << "\n"
         << endl;
}
//* End Function ..
