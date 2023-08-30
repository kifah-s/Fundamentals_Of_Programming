# Notes ..

<br>

1. printing a string as a string:

```c
// Get and print string  / Function.
void getStringFun(char string[400])
{
    printf("Please enter a sentence: ");
    scanf("%[^\n]", string);

    printf("%s\n\n", string); // printing a string as a string.
}
```

<br>

2. printing a string as a chars:

```c
// Get and print string / Function.
void getStringFun(char string[400], char letter)
{
    printf("Please enter a sentence: ");
    scanf("%[^\n]", string);

    printf("\n");
    for (int i = 0; string[i]; i++)
    {
        letter = string[i];
        printf("%c", letter); // printing a string as a chars.
    }
    printf("\n\n");
}
```

<br>

3. Palindrome / Function:

```c
void palindromeFun(int number)
{
    int x = number, y = 0;

    while (number != 0)
    {
        y = y * 10 + number % 10;
        number = number / 10; // Remove last digit from number.
    }

    if (x == y)
    {
        printf("\nPalindrome\n\n");
    }
    else
    {
        printf("\nNot Palindrome\n\n");
    }
}
```
