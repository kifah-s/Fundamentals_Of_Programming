//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void transformString(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        // Convert to uppercase
        str[i] = toupper(str[i]);

        // Replace spaces with underscores
        if (str[i] == ' ')
        {
            str[i] = '_';
        }

        // Shift letters three places forward
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] > 'W')
            {
                str[i] = 'A' + (str[i] - 'W' - 1);
            }
            else
            {
                str[i] += 3;
            }
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    char text[100];

    // Reading the string input
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character
    text[strcspn(text, "\n")] = 0;

    // Transforming the string
    transformString(text);

    // Displaying the transformed string
    printf("Transformed string: %s\n", text);

    printf("\n\n");

    return 0;
}