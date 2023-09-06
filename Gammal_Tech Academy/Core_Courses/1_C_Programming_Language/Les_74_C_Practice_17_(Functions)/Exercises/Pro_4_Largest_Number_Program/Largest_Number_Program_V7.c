

/* >>> Largest Number Program ( Version 7 ) <<< */

/* >>> A program that asks the user to enter 4 numbers and prints the largest number in them (using a function). <<< */

// www.gammal.tech

#include <stdio.h>

int big(int n1, int n2, int n3, int n4)
{
    int max = n1;

    if (n2 > max)
        max = n2;
    if (n3 > max)
        max = n3;
    if (n4 > max)
        max = n4;

    return max;

    // int max1 = n1 > n2 ? n1 : n2;
    // int max2 = n3 > n4 ? n3 : n4;
    // if (max1 > max2)
    //     return max1;
    // return max2;
}

int main()
{
    int n1, n2, n3, n4;

    printf("\nEnter 4 numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    printf("\n%d\n\n", big(n1, n2, n3, n4));

    return 0;
}