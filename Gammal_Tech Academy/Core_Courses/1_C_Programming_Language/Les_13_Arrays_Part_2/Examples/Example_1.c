

/* >>> Example 1 <<< */

int main()
{
    printf("\n\nYou welcome in Example - 1 ..\n\n");

    int i, mark, count = 0, x[] = {90, 100, 65, 77, 100, 100};

    printf("Enter number : ");
    scanf("%d", &mark);
    for (i = 0; i < 6; i++)
    {
        if (x[i] == mark)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("\n%d", count);
    }
    else
    {
        printf("No one got 100");
    }

    printf("\n\n\n");
}