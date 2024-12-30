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

    int T, amount;
    char transactionType;
    int balance = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf(" %c %d", &transactionType, &amount);
        if (transactionType == 'C')
        {
            balance += amount;
        }
        else if (transactionType == 'D')
        {
            balance -= amount;
        }
    }
    if (balance < 0)
    {
        printf("Overdrawn\n");
    }
    else
    {
        printf("%d\n", balance);
    }

    printf("\n\n");

    return 0;
}