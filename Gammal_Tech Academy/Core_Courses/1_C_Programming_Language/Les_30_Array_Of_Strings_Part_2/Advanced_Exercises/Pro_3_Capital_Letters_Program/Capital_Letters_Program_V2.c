

/* >>> Capital Letters Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a sentence with a maximum of 50 characters, and prints the number of capital letters. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int capital_letters();

int main()
{
    welcomeMassageFun();
    capital_letters();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Capital Letters Program ( Version 2 ) ..\n\n");
}

// capital letters function;
int capital_letters()
{
    // Declaration array, counters and variable;
    char arr[50];
    int i, counter_capital = 0;

    // Receive values from the user;
    printf("Please enter a sentence \" max - 50 characters \" : \n");
    fgets(arr, 50, stdin);

    for (i = 0; i <= strlen(arr); i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z' /* Or use the character number in ascii table, arr[i] >= 65 && arr[i] <= 90 */)
        {
            counter_capital++;
        }
    }
    printf("\nCount the capital letters is : %d", counter_capital);

    printf("\n\n\n");
}