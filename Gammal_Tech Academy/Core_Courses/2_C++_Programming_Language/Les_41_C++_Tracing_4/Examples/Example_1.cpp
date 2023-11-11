

/* >>> Example 1 <<< */

#include <iostream>

using namespace std;

int main()
{
    int A[5] = {1, 2, 3};
    int K = 0;

    K = A[0] + A[2] + A[4] * 10;

    cout << K;

    return 0;
}

//* Output : 4

//* Explanation : Here, we declared a one - dimensional array A with size 5 and variable K with initial value 0.
//* The values of the array are :
//* A[0] = 1
//* A[1] = 2
//* A[2] = 3
//* A[3] = 0
//* A[4] = 0

//* K = 1 + 3 + 0 * 10
//*   = 1 + 3 + 0
//*   = 4