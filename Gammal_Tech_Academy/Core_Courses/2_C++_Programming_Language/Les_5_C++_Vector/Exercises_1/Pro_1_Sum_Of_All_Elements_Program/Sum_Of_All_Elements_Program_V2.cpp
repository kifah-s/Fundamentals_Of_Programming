

//* >>> Sum Of All Elements Program ( Version 1 ) <<< */

//* >>> How to find the sum of all elements in a vector? <<< */

#include <iostream>
#include <string>
#include <vector>
#include <numeric>


using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void allNumbersFun(vector<int> x, int sum);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    vector<int> myVector = {1, 2, 3, 4, 5};
    int sumAllNumbers = 0;
    // ... End Variables ...

    // ... Functions ...
    allNumbersFun(myVector,sumAllNumbers);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Sum Of All Elements Program ( Version 1 ) .." << endl
         << endl;
}

// Sum Of All numbers in vector / Function.
void allNumbersFun(vector<int> x, int sum)
{
    /* for (int i = 0; i < x.size(); i++)
    {
        sum += x[i];
    } */

    sum = accumulate(x.begin(), x.end(), 0);

    cout << "Sum Of All Numbers In Vector = " << sum << endl
         << endl
         << endl;
}
// *** End Functions ***
