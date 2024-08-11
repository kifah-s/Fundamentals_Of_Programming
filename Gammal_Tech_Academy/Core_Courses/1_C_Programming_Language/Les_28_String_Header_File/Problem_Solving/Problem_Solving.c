//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 200

//* Functions ..

// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

int wordCount(const char *str)
{
    int count = 0, inWord = 0;
    while (*str)
    {
        if (isspace(*str))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
            count++;
        }
        str++;
    }
    return count;
}

int longestWordLength(const char *str)
{
    int maxLength = 0, length = 0;
    while (*str)
    {
        if (isspace(*str))
        {
            if (length > maxLength)
            {
                maxLength = length;
            }
            length = 0;
        }
        else
        {
            length++;
        }
        str++;
    }
    return (length > maxLength) ? length : maxLength;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    char str1[MAX_LENGTH], str2[MAX_LENGTH];

    // Reading the first string input
    printf("Enter the first string: ");
    fgets(str1, MAX_LENGTH, stdin);

    // Remove newline character
    str1[strcspn(str1, "\n")] = 0;

    // Reading the second string for comparison
    printf("Enter the second string to compare: ");
    fgets(str2, MAX_LENGTH, stdin);

    // Remove newline character
    str2[strcspn(str2, "\n")] = 0;

    // String analysis
    printf("Number of words in the first string: %d\n", wordCount(str1));

    printf("Length of the longest word: %d\n", longestWordLength(str1));

    printf("The two strings are %s.\n", (strcmp(str1, str2) == 0) ? "identical" : "not identical");

    printf("\n\n");

    return 0;
}