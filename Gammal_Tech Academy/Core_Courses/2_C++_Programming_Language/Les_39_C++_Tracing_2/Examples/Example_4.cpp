

/* >>> Example 4 <<< */

#include <iostream>
#include <stdio.h>

using namespace std;

int x = 3;

int main()
{
    if (x)
    {
        cout << "kifah" << endl;
        x--;
        main();
    }
    else
    {
        cout << "kifah saloum" << endl;
    }

    return 0;
}

//* Recursion.