

//* Product Of Multiplied Program (Version 1).

/*
* Print the product of 9 multiplied by 3

! Output:
! 27
*/

#include <iostream>

using namespace std;

void resultFun();

int main()
{
    // Declare Variables.

    // Call Functions.
    resultFun();

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    cout << "\n\nYou welcome in Product Of Multiplied Program (Version 1) ..\n"
         << endl;
}

// Product Of Multiplied - Function.
void productOfMultipliedFun()
{
    cout << "result of product 9 multiplied 3: " << 9 * 3 << "\n\n"
         << endl;
}

// Result - Function.
void resultFun()
{
    printWelcomeMessageFun();
    productOfMultipliedFun();
}
//* End Function ..
