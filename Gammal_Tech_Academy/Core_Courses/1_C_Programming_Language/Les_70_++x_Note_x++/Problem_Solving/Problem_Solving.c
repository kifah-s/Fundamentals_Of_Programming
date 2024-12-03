//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void printA()
{
    printf(" * \n");
    printf(" * * \n");
    printf("*****\n");
    printf("* *\n");
    printf("* *\n");
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    char letter;
    scanf("%c", &letter);
    switch (letter)
    {
    case 'A':
        printA();
        break;
    // Add cases for other letters as needed
    default:
        printf("Letter not supported.\n");
    }

    printf("\n\n");

    return 0;
}