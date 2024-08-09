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

    // Array to store the country name
    char country[100];

    // Prompt the user
    printf("Enter the name of your country: ");

    // Read the country name
    scanf("%s", country);

    // Print the welcoming message
    printf("Welcome to Gammal Tech's International Printf Conference, %s!\n", country);

    printf("\n\n");

    return 0;
}