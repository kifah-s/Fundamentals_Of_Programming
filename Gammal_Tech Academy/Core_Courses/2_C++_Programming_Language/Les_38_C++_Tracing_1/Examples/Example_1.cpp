

/* >>> Example 1 <<< */

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int x = 5;
    cout << x / 2 << endl;
    int z = x * 100 / 2;
    cout << z / 100 << "." << z % 100 << endl;
    cout << (float)x / 2 << endl;

    int y = 2;
    float a = x / y;
    cout << a << endl;

    a = 5.9;
    printf("%g\n", a);

    int b = 3111222333;
    printf("%d\n", b);

    unsigned long long int c = 3111222333;
    printf("%llu \n", b);

    return 0;
}

//*output :
//* 2
//* 2.50
//* 2.5
//* 2
//* 5.9
//* - 1183744963
//* 3111222333