//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void encrypt(char *msg, int shift)
{
    for (int i = 0; msg[i] != '\0'; i++)
    {
        if (msg[i] >= 'A' && msg[i] <= 'Z')
        {
            msg[i] = (msg[i] - 'A' + shift) % 26 + 'A';
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    scanf("%d", &n);

    char message[1001];
    int shift;

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", message, &shift);
        encrypt(message, shift);
        printf("%s\n", message);
    }

    printf("\n\n");

    return 0;
}