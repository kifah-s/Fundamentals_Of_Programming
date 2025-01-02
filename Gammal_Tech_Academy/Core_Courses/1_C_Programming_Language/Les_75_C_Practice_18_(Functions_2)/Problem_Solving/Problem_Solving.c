//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void decrypt(char *s, int n)
{
    int i, len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = ((s[i] - 'a' + n) % 26) + 'a';
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int t, n;
    char s[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", s);
        scanf("%d", &n);
        decrypt(s, n);
        printf("%s\\n", s);
    }

    printf("\n\n");

    return 0;
}