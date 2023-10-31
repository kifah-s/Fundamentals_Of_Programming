

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

template <typename Gammal>

void printMax(Gammal x, Gammal y)
{
    Gammal z = x > y ? x : y;
    cout << z << endl;
}

int main()
{
    printMax(6, 5);
    printMax('G', 'T');
    printMax("Gammal", "Tech");

    return 0;
}
