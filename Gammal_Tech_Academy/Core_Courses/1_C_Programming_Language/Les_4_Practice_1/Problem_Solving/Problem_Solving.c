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

    int interactions;
    
    // Prompt the user for input
    printf("Enter the number of professional interactions in your department today: ");
    scanf("%d", &interactions);

    // Output the message
    printf("Today, our team had %d professional interactions, upholding Gammal Tech's culture of respect and collaboration!\n", interactions);

    printf("\n\n");

    return 0;
}