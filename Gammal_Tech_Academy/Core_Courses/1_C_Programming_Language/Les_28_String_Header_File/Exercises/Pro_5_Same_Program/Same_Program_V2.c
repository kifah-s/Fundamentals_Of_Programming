

/* >>> Same Program ( Version 2 ) <<< */

/* >>> A program requesting the user to enter two words if the two words are similar "Same" is printed , and if the two words are different the shorter word is printed. <<< */

#include <stdio.h>
#include <string.h>

int same();

int main()
{
    printf("\n\nYou welcome in Same Program ( Version 2 ) ..\n\n");

    same();

    return 0;
}

// Functions ..
// same function;
int same()
{
    // Declaration arrays of characters;
    char word_1[25], word_2[25];

    // Receive values from the user;
    printf("Please enter word 1 : ");
    scanf("%s", word_1);

    printf("Please enter word 2 : ");
    scanf("%s", word_2);

    // Declaration correct variable;
    int correct = strcmp(word_1, word_2);

    // Check same or not;
    if (correct == 0)
    {
        printf("\nSame");
    }
    else
    {
        // Checking word 1 length;
        int len_1 = 0;
        for (int i = 0; i < word_1[i]; i++)
        {
            len_1++;
        }

        // Checking word 2 length;
        int len_2 = 0;
        for (int i = 0; i < word_2[i]; i++)
        {
            len_2++;
        }

        // Checking smaller word;
        if (len_2 < len_1)
        {
            printf("\n%s", word_2);
        }
        else
        {
            printf("\n%s", word_1);
        } 
    }

    printf("\n\n\n");
}