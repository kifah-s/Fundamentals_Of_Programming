

/* >>> Sqrt For Input Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a number and print the square root of the number. <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("\n\nYou welcome in Sqrt For Input Program ( Version 2 ) ..\n\n");

    float num = 0;
    printf("Please enter a number : ");
    scanf("%f", &num);

    num = sqrt(num);

    printf("\nSqrt is : %.2f\n\n", num);
    
    return 0;
}

