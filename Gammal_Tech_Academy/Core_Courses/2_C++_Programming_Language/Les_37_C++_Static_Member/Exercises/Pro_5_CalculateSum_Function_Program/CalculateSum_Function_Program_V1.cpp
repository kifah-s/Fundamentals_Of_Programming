
//* CalculateSum Function Program (Version 1).

/*
* Create a program that includes a function calculateSum which calculates the cumulative sum of user-inputted numbers using a static variable.
* In the main function, call the calculateSum function three times and observe the cumulative sum.

! Input & Output:
! Calculating cumulative sum with user input:
! Please enter a number: 3
! cumulative sum: 3
! Please enter a number: 5
! cumulative sum: 8
! Please enter a number: 6
! cumulative sum: 14
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
    cout << "\n\nYou welcome in CalculateSum Function Program (Version 1) ..\n"
         << endl;
}

// Get Number - Function.
float getNumberFun()
{
    float num = 0;
    cout << "Please, enter a number: ";
    cin >> num;

    return num;
}

// Sum Numbers - Function.
float sumNumbersFun(float num)
{
    static float sumNumber = 0;

    sumNumber = sumNumber + num;

    cout << "cumulative sum: " << sumNumber << endl;
}

// Result - Function.
void resultFun()
{
    // Declare Variables.
    float number = 0;

    // Call Functions.
    printWelcomeMessageFun();

    cout << "Calculating cumulative sum with user input:" << endl;
    number = getNumberFun();
    sumNumbersFun(number);

    number = getNumberFun();
    sumNumbersFun(number);
    
    number = getNumberFun();
    sumNumbersFun(number);

    cout << "\n"
         << endl;
}
//* End Function ..
