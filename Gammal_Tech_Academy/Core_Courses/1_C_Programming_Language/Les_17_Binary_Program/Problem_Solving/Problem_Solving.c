//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

//* End Functions ..

int main()
{
    problemSolvingFun();

    char binary[5];
    int length;

    // Prompt the user for input
    printf("Enter a binary number (up to 4 digits): ");
    scanf("%s", binary);
    length = strlen(binary);

    // Flip each digit of the binary number
    printf("Flipped binary number: ");
    for (int i = 0; i < length; i++)
    {
        if (binary[i] == '0')
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    printf("\n\n");

    return 0;
}