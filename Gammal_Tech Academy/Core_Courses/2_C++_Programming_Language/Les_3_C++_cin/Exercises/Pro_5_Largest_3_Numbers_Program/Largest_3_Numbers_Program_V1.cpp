

//* >>> Largest 3 Numbers Program ( Version 1 ) <<< */

//* >>> Write a program that inputs teen numbers from the user and outputs the largest of the three numbers. <<< */

#include <iostream>
#include <string>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
int *getNumbersFun(int x[10]);
void largest3NumbersFun(int x[10]);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    int numbers[10];
    // ... End Variables ...

    // ... Functions ...
    getNumbersFun(numbers);
    largest3NumbersFun(numbers);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Largest 3 Numbers Program ( Version 1 ) .." << endl
         << endl;
}

// Get numbers from user / Function.
int *getNumbersFun(int x[10])
{
    cout << "Please enter 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Num " << i + 1 << ": ";
        cin >> x[i];
    }

    cout << endl;

    return x;
}

// Largest 3 numbers / Function.
void largest3NumbersFun(int x[10])
{
    // Select and print largest number.
    int largestNumber = x[0];
    for (int i = 0; i < 10; i++)
    {
        if (x[i] > largestNumber)
        {
            largestNumber = x[i];
        }
    }
    cout << "Largest number is : " << largestNumber << endl;

    // Select and print second largest number.
    int secondLargestNumber = x[0];
    for (int i = 0; i < 10; i++)
    {
        if (x[i] > secondLargestNumber && x[i] < largestNumber)
        {
            secondLargestNumber = x[i];
        }
    }
    cout << "Second largest number is : " << secondLargestNumber << endl;

    // Select and print third largest number.
    int thirdLargestNumber = x[0];
    for (int i = 0; i < 10; i++)
    {
        if (x[i] > thirdLargestNumber && x[i] < largestNumber && x[i] < secondLargestNumber)
        {
            thirdLargestNumber = x[i];
        }
    }
    cout << "third largest number is : " << thirdLargestNumber;

    cout << endl
         << endl
         << endl;
}
// *** End Functions ***
