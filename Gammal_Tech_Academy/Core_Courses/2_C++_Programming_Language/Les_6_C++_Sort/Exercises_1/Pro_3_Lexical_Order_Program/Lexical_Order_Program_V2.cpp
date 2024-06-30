

//* >>> Lexical Order Program ( Version 2 ) <<< */

//* >>> Sort an array of strings in Lexical Order using the built-in sort function. <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// ... Global Variables ...
// ... End Global Variables ...

// ... Functions ...
void welcomeMassageFun();
void lexicalOrderARRFun(string arr[], int s);
// ... End Functions ...

int main()
{
    welcomeMassageFun();

    // ... Variables ...
    string array[] = {"C", "A", "D", "B", "E"};
    int arraySize = sizeof(array) / sizeof(array[0]);
    // ... End Variables ...

    // ... Functions ...
    lexicalOrderARRFun(array, arraySize);
    // ... End Functions ...

    return 0;
}

// *** Functions ***
// Welcome massage / Function.
void welcomeMassageFun()
{
    cout << endl
         << endl
         << "You welcome in Lexical Order Program ( Version 2 ) .." << endl
         << endl;
}

// Lexical Order for Array / Function.
void lexicalOrderARRFun(string arr[], int s)
{
    cout << "Array Before Lexical Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    sort(arr, arr + s);
    cout << "Array After Lexical Order:" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;
}
// *** End Functions ***
