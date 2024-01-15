

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int *p = &a;
    int **p2 = &p;
    int ***p3 = &p2;
    int ****p4 = &p3;
    cout << "----------------------" << endl;
    cout << "Pointers 1: " << endl;
    cout << (p4) << endl;
    cout << (*p4) << endl;
    cout << (**p4) << endl;
    cout << (***p4) << endl;
    cout << (****p4) << endl;
    a = 90;
    cout << "----------------------" << endl;
    cout << "Pointers 2: " << endl;
    cout << (p4) << endl;
    cout << (*p4) << endl;
    cout << (**p4) << endl;
    cout << (***p4) << endl;
    cout << (****p4) << endl;
    a = 50;
    int &r = a;
    int &r2 = r;
    int &r3 = r2;
    int &r4 = r3;
    cout << "----------------------" << endl;
    cout << "Reference 1: " << endl;
    cout << r << " " << r2 << " " << r3 << " " << r4 << endl;
    a = 90;
    cout << "----------------------" << endl;
    cout << "Reference 2: " << endl;
    cout << r << " " << r2 << " " << r3 << " " << r4 << endl;

    return 0;
}
