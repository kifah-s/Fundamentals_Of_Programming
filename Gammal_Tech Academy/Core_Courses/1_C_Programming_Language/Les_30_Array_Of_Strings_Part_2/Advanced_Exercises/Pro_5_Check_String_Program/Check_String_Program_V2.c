

/* >>> Check String Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a sentence with a maximum of 100 characters, and prints the number of letters, special marks, numbers, and spaces. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int check();

int main()
{
    welcomeMassageFun();
    check();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Check String Program ( Version 2 ) ..\n\n");
}

// check function;
int check()
{
    // Declaration array, counters and variable;
    char arr[100];
    int i, letters = 0, special_marks = 0, numbers = 0, spaces = 0;

    // Receive values from the user;
    printf("Please enter a sentence \" max - 100 characters \" : \n");
    fgets(arr, 100, stdin);

    for (i = 0; i <= strlen(arr); i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z' /* Or use the character number in ascii table, arr[i] >= 97 && arr[i] <= 122 */)
        {
            letters++;
        }
        else if (arr[i] == ' ')
        {
            spaces++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            numbers++;
        }
        else if (arr[i] == '*' || arr[i] == '#' || arr[i] == '@' || arr[i] == '!' || arr[i] == '%' || arr[i] == ';')
        {
            special_marks++;
        }
    }
    printf("\nCount the letters is : %d", letters);
    printf("\nCount the space is : %d", spaces);
    printf("\nCount the numbers is : %d", numbers);
    printf("\nCount the special marks is : %d", special_marks);

    printf("\n\n\n");
}