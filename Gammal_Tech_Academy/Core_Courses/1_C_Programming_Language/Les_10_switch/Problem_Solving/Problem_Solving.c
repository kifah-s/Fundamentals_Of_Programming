//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

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

    int qualityLevel;

    // Prompt the user for input
    printf("Enter the project's quality level (1-5): ");
    scanf("%d", &qualityLevel);

    // Quality check switch statement
    switch (qualityLevel)
    {
    case 1:
        printf("Quality Level 1: A good start, but much more is required for perfection.\n");
        break;

    case 2:
        printf("Quality Level 2: Progressing well, but keep refining your work.\n");
        break;

    case 3:
        printf("Quality Level 3: Good quality, now aim for higher standards.\n");
        break;

    case 4:
        printf("Quality Level 4: Excellent work, but strive for that final touch of perfection.\n");
        break;

    case 5:
        printf("Quality Level 5: Perfection achieved! This is the Gammal Tech standard.\n");
        break;

    default:
        printf("Invalid input. Please enter a level between 1 and 5.\n");
    }

    printf("\n\n");

    return 0;
}