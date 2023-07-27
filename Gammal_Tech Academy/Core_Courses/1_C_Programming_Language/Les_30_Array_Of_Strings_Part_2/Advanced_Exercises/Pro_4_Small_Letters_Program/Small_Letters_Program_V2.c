

/* >>> Small Letters Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a sentence with a maximum of 50 characters, and prints the number of small letters. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
int small_letters();

int main()
{
    welcomeMassageFun();
    small_letters();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Small Letters Program ( Version 2 ) ..\n\n");
}

// small letters function;
int small_letters()
{
    // Declaration array, counters and variable;
    char arr[50];
    int i, counter_small = 0;

    // Receive values from the user;
    printf("Please enter a sentence \" max - 50 characters \" : \n");
    fgets(arr, 50, stdin);

    for (i = 0; i <= strlen(arr); i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' /* Or use the character number in ascii table, arr[i] >= 97 && arr[i] <= 122 */)
        {
            counter_small++;
        }
    }
    printf("\nCount the small letters is : %d", counter_small);

    printf("\n\n\n");
}