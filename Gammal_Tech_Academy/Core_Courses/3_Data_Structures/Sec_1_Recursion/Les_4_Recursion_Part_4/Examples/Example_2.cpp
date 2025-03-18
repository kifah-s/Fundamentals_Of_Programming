
//*  Example 2 ..

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

int numberOfPhones, numberOfBox, boxes[100];

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Example 2 ..\n"
         << endl;
}

// check - Recursion Function.
int checkRecFun(int i, int t)
{
    if (i == numberOfBox)
    {
        return numberOfPhones == t;
    }

    return checkRecFun(i + 1, t + boxes[i]) + checkRecFun(i + 1, t);
}
//* End Functions ..

int main()
{
    // Call Functions.
    printWelcomeMessageFun();

    cout << "Please, enter a number of phones you need: ";
    cin >> numberOfPhones;

    cout << "Please, enter a number of boxes in stock: ";
    cin >> numberOfBox;

    for (int i = 0; i < numberOfBox; i++)
    {
        cout << "Please, enter the number of phones in box " << i + 1 << ": ";
        cin >> boxes[i];
    }

    cout << "\n"
         << checkRecFun(0, 0) << endl;

    cout << endl
         << endl;

    return 0;
}
