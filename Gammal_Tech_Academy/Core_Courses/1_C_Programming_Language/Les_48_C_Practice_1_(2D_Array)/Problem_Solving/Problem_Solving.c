//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void transformString(char *str)
{
    int len = strlen(str);
    // Reversing the string
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    // Replacing vowels and appending length
    printf("Transformed String: ");
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            printf("Z");
        }
        else
        {
            printf("%c", str[i]);
        }
    }
    printf("%d\n", len);
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    char str[101];
    printf("Enter string: ");
    scanf("%100s", str);
    transformString(str);

    printf("\n\n");

    return 0;
}