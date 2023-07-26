

/* >>> Same Program ( Version 5 ) <<< */

/* >>> A program requesting the user to enter two words if the two words are similar "Same" is printed , and if the two words are different the shorter word is printed. <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
char *word1Fun();
char *word2Fun();
int same();

int main()
{
    welcomeMassageFun();

    same();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Same Program ( Version 5 ) ..\n\n");
}

// get word 1 function;
char *word1Fun()
{
    // Declaration arrays of characters;
    static char word_1[25];

    // Receive values from the user;
    printf("Please enter word 1 : ");
    scanf("%s", word_1);

    return word_1;
}

// get word 2 function;
char *word2Fun()
{
    // Declaration arrays of characters;
    static char word_2[25];

    // Receive values from the user;
    printf("Please enter word 2 : ");
    scanf("%s", word_2);

    return word_2;
}

// same function;
int same()
{
    char *word_1 = word1Fun();
    char *word_2 = word2Fun();

    // Check same or not;
    if (strcmp(word_1, word_2) == 0)
    {
        printf("\nSame");
    }
    else
    {
        // Checking smaller word;
        if (strlen(word_2) < strlen(word_1))
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