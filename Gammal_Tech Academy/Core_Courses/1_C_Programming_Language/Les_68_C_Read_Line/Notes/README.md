# Notes ..

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
