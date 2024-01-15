

/* >>> Example 5 <<< */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int array[] = {1, 8, 6, 4, 5, 9, 10};

    //* Calculate the length of the array.
    int arrSize = sizeof(array) / sizeof(array[0]);

    cout << endl
         << "length of the array = " << arrSize << endl
         << endl;

    return 0;
}
