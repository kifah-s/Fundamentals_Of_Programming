

/* >>> Sqrt For Numbers Program ( Version 1 ) <<< */

/* >>> A program that prints the square root of (4, 9, 16, 25, 36, 144). <<< */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    printf("\n\nYou welcome in Sqrt For Numbers Program ( Version 1 ) ..\n\n");

    float num1 = sqrt(4),
          num2 = sqrt(9),
          num3 = sqrt(16),
          num4 = sqrt(25),
          num5 = sqrt(36),
          num6 = sqrt(144);

    printf("Sqrt 4 = %.2f\n", num1);
    printf("Sqrt 9 = %.2f\n", num2);
    printf("Sqrt 16 = %.2f\n", num3);
    printf("Sqrt 25 = %.2f\n", num4);
    printf("Sqrt 36 = %.2f\n", num5);
    printf("Sqrt 144 = %.2f\n\n", num6);

    return 0;
}