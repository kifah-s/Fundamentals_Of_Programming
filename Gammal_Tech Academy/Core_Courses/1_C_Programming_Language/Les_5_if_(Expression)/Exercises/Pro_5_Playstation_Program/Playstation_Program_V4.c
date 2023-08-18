

/* >>> Playstation Program ( Version 4 )<<< */

/* >>> Playstation Program : when playing Match Football on the playstation is calculated the earner and loser based on the number of goals.                                                                                                                                                                                                                                                \
Required : Write a program that asks the user to enter two numbers, the first expresses the number of goals of the first player and the second expresses the number of goals of the second player. If the first number is greater than the second number the program prints player 1 is the winner and if the second number is greater than the first number, the player 2 is the winner <<< */

#include <stdio.h>

void welcomeMassageFun();
int playerFirstFun();
int playerSecondFun();
int playstationFun(int p_1, int p_2);

int main()
{
    welcomeMassageFun();

    int p_1 = playerFirstFun();
    int p_2 = playerSecondFun();
    
    playstationFun(p_1, p_2);

    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Playstation Program ( Version 4 ) ..\n\n");
}

// player first function;
int playerFirstFun()
{
    int p_1;
    printf("Please, enter the number goals for the first player : ");
    scanf("%d", &p_1);
    return p_1;
}

// player Second function;
int playerSecondFun()
{
    int p_2;
    printf("Please, enter the number goals for the Second player : ");
    scanf("%d", &p_2);
    return p_2;
}

// Playstation function;
int playstationFun(int p_1, int p_2)
{
    if (p_1 > p_2)
    {
        printf("Player first is winner\n");
    }
    else if (p_1 < p_2)
    {
        printf("\nPlayer second is winner\n\n\n");
    }
    else
    {
        printf("\nThe result is equal\n\n\n");
    }
}