# Notes ..

<br>

1. i + 1 in for loop:

```c
// From 1 to input / Function.
    void from1ToInputFun(int number)
    {
        int sum = 0;
        for (int i = 1; i <= number; /* i + 1 */ ) // infinite loop .. Because i + 1 No change in value i.
        {
            printf("\n%d", i);
            sum += i;
        }
        printf("\n\n");

        printf("Sum numbers from 1 to %d = %d\n\n", number, sum);
    }
```

<br>

2. " sum = (number \* (number + 1)) / 2 " == " sum += i ":

```c
// From 1 to input / Function.
void from1ToInputFun(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        printf("\n%d", i);
        // sum += i;
    }
    sum = (number * (number + 1)) / 2;
    printf("\n\n");

    printf("Sum numbers from 1 to %d = %d\n\n", number, sum);
}
```
