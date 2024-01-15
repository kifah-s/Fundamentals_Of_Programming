

/* >>> Pow For Input Program ( Version 1 ) <<< */

/* >>> A program that asks the user to enter a number and print the result of raising the number once to the power (2), once to the power (3), and once to the power (5). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("\n\nYou welcome in Pow For Input Program ( Version 1 ) ..\n\n");

    int num = 0;
    printf("Please enter a number : ");
    scanf("%d", &num);

    int numPow2 = pow(num, 2);
    printf("%d Pow 2 = %d\n", num, numPow2);
    
    int numPow3 = pow(num, 3);
    printf("%d Pow 3 = %d\n", num, numPow3);
    
    int numPow5 = pow(num, 5);
    printf("%d Pow 5 = %d\n\n", num, numPow5);


    return 0;
}