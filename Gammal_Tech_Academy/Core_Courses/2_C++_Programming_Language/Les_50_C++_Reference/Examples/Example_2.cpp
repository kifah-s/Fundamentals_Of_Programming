

/* >>> Example 2 <<< */

#include <iostream>

using namespace std;

void swap(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;
}

int main()
{

    int x = 5, y = 9;

    cout << x << "\t" << y << endl;

    swap(x, y);

    cout << x << "\t" << y << endl;

    return 0;
}

//* Output :
//* 5 9
//* 5 9