

/* >>> Example 6 <<< */

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
    cout << (*p4) << endl;
    cout << (**p4) << endl;
    cout << (***p4) << endl;
    cout << (****p4) << endl;

    return 0;
}

//* Output:
//* 004FFE60
//* 004FFE6C
//* 004FFE78
//* 004FFE84
//* 5