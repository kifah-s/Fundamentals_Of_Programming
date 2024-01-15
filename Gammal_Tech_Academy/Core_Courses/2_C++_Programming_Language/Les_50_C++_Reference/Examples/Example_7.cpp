

/* >>> Example 7 <<< */

#include <iostream>

using namespace std;

int main()
{

    int x = 5;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;

    cout << (p4) << endl;

    x = 9;

    cout << (p4) << endl;

    return 0;
}

//* Output:
//* 0093FB94
//* 0093FB94