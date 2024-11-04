//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void encrypt(char *input, int key)
{
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = ((input[i] - 'a' + key) % 26) + 'a';
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int key;
    char str[100];

    // Reading the key and the string
    scanf("%d", &key);
    scanf("%s", str);

    // Encrypting the string
    encrypt(str, key);

    // Output the encrypted string
    printf("%s\n", str);

    printf("\n\n");

    return 0;
}