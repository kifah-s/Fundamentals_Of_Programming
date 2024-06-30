

/* >>> Amusement Park Games Program ( Version 2 ) <<< */

/* >>> At the club there are some games that are dangerous to some people's ages. If this person is younger than 10 years or older than 50 years, he or she is prohibited from entering.
Required : Make a program that asks a person to enter a number expressing his age, if he is older than 50 or less than 10 prints the word "not allowed". <<< */

#include <stdio.h>

void welcomeMassageFun();
int amusementParkGamesFun();

int main()
{
    welcomeMassageFun();
    amusementParkGamesFun();
    
    return 0;
}

// Function;
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Amusement Park Games Program ( Version 2 ) .. \n\n");
}

// Amusement Park Games function;
int amusementParkGamesFun()
{

    int age;

    printf("Please enter your age before playing this game : ");
    scanf("%d", &age);

    if (age < 10 || age > 50)
    {
        printf("\nWarning : this game Danger in the rate of your age\n\n\n");
    }
    else
    {
        printf("\nHave fun in the game\n\n\n");
    }
}