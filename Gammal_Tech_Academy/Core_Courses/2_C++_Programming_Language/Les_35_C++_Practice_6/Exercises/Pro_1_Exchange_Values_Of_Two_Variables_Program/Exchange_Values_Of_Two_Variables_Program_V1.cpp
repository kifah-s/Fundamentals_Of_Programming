
//* Exchange Values Of Two Variables Program (Version 1).

/*
* Write a program that defines a generic swap function to exchange the values of two variables.
* Demonstrate the usage of the generic swap function with integers and characters.
* Provide the program code and the output.

! Output:
! Befor swapping: 10, 20
! Befor swapping: A, B

! After swapping: 2, 1
! After swapping: B, A
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
#include <cmath>

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
    cout << "\n\nYou welcome in Exchange Values Of Two Variables Program (Version 1) ..\n"
         << endl;
}

// Create Template.
template <typename T>

// Print Values - Function.
void printValuesFun(T val1, T val2)
{
    cout << val1 << ", " << val2 << endl;
}

// Create Template.
template <typename T>

// Swapping - Function.
void swappingFun(T &val1, T &val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    int num1 = 10, num2 = 20;
    char ch1 = 'A', ch2 = 'B';

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Befor swapping: ";
    printValuesFun(num1, num2);
    cout << "Befor swapping: ";
    printValuesFun(ch1, ch2);

    swappingFun(num1, num2);
    swappingFun(ch1, ch2);

    cout << "After swapping: ";
    printValuesFun(num1, num2);
    cout << "After swapping: ";
    printValuesFun(ch1, ch2);

    cout << "\n"
         << endl;
}
//* End Function ..
