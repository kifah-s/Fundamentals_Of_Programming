

// >>> Carpenters Program ( Version 1 ) <<< */

/* >>> Program for carpenters ...

All carpenters and designers of wooden tools pay good attention to measurements and dimensions... as an increase or decrease in the dimensions of a part of the design may lead to it not being compatible with the rest of the parts... so any professional carpenter performs the measurement process for each part more than once before implementing the other part that is appropriate for it. When installing, after these measurements, he must take into account that the design is no less than the lowest reading and no more than the highest reading.

Required: Create a program that records the different readings for the same dimension and then arranges and prints them to help the carpenter make the design in a professional manner. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

// ... Functions ...
void welcomeMassageFun();
void arrangeItemsFun(set<float> s);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // Creat Set.
    set<float> mySet;

    // Arrange items.
    arrangeItemsFun(mySet);

    return 0;
}

// ... Functions ...
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Carpenters Program ( Version 1 ) .." << endl
         << endl;
}

// Arrange items / Function.
void arrangeItemsFun(set<float> s)
{
    float n = 0;
    do
    {
        cout << "Please Enter data (Or enter 0 To arrange it): ";
        cin >> n;
        if (n == 0)
        {
            break;
        }
        s.insert(n);
    } while (n != 0);

    cout << endl
         << "Data: ";
    for (auto ele : s)
    {
        cout << ele << "    ";
    }

    cout << endl
         << endl
         << endl;
}
// ... End Functions ...
