

/* >>> Size Of Box Program ( Version 1 ) <<< */

/* >>> A program that calculates the size of a box whose length and width are fixed with a value of 5 and 10 and the height is variable for the user by entering its value (size = length x width x height). <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n\nYou welcome in Size Of Box Program ( Version 1 ) ..\n\n");

    const int length = 5, width = 10;
    int height = 0;

    printf("Please enter height of bix : ");
    scanf("%d", &height);

    int size = length * width * height;

    printf("\nSize of bix = %d\n\n", size);

    return 0;
}