//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <string.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

void sortStrings(char arr[][101], int n, char c)
{
    int count[n];
    for (int i = 0; i < n; i++)
    {
        count[i] = 0;
        for (int j = 0; arr[i][j]; j++)
        {
            if (arr[i][j] == c)
                count[i]++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (count[i] < count[j] || (count[i] == count[j] &&
                                        strcmp(arr[i], arr[j]) > 0))
            {
                int temp = count[i];
                count[i] = count[j];
                count[j] = temp;
                char tempStr[101];
                strcpy(tempStr, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], tempStr);
            }
        }
    }
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int n;
    char c;
    scanf("%d %c", &n, &c);
    char arr[n][101];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }
    sortStrings(arr, n, c);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    printf("\n\n");

    return 0;
}