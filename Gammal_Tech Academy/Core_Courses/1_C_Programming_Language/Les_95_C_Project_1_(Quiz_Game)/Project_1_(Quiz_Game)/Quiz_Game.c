

/* >>> Project ( Quiz Game ) <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

// Functions ..
void welcomeMassageFun();
void startOrEndPlayFun(int startOrEnd);
void gameRulesFun();

int main()
{
    welcomeMassageFun();

    int startOrEnd;
    startOrEndPlayFun(startOrEnd);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Project ( Quiz Game ) ..\n\n");
}

// Start or end play / Function.
void startOrEndPlayFun(int startOrEnd)
{
    printf("if you want play, please enter any number / if you can't play, please enter 0: ");
    scanf("%d", &startOrEnd);

    if (startOrEnd != 0)
    {
        gameRulesFun();
    }
}

// Game rules // Function.
void gameRulesFun()
{
    printf("\nYou welcome in ( Quiz Game ) ..\n\n");
    printf("Game rules: \n");
    printf("- The game Containing 10 questions Specializing in software engineering ..\n");
    printf("- For each correct answer, 5 points ..\n\n");
    printf("Let's start playing :)\n");
    printf("__________________________________________________________________________\n\n");
}

// Question 1 / Function.
void question_1_Fun()
{
    
}