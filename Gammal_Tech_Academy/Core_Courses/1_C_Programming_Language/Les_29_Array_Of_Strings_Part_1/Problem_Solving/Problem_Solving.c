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

    // Array of strings containing greetings in different languages
    const char *greetings[] = {"Hello!", "¡Hola!", "Bonjour!", "Hallo!", "こんにちは!"};
    int choice;

    // Display language options
    printf("Choose a language (1-5):\n");
    printf("1. English\n2. Spanish\n3. French\n4. German\n5. Japanese\n");
    printf("Selection: ");
    scanf("%d", &choice);

    // Validate choice and display the corresponding greeting
    if (choice >= 1 && choice <= 5)
    {
        printf("%s\n", greetings[choice - 1]);
    }
    else
    {
        printf("Invalid selection.\n");
    }

    printf("\n\n");

    return 0;
}