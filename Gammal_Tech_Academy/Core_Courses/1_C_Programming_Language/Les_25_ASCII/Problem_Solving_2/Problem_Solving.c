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

    char text[100];

    // Reading the string input
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Displaying ASCII values for each character
    printf("ASCII values:\n");
    for (int i = 0; i < strlen(text) - 1; i++)
    {
        // -1 to exclude the newline character.
        printf("%c - %d\n", text[i], (int)text[i]);
    }

    printf("\n\n");

    return 0;
}