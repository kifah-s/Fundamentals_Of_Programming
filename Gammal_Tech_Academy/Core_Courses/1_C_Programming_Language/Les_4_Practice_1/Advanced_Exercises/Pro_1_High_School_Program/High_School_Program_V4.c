

/* >>> High School Program ( Version 4 ) <<< */

/* >>> sharif finished his high school exams, and when the result appeared, he wanted to calculate the number of grades he had lost.
Required : Write a program that asks the person about his grades in 6 different subjects, assuming that each subject is out of 100, and then prints a missing score in all subjects. <<< */

#include <stdio.h>

void welMasFun();

int mathematicsFun();
int arabicFun();
int chemistryFun();
int historyFun();
int geographyFun();
int physicsFun();

int totalFun();

int main()
{
    welMasFun();
    totalFun();

    return 0;
}

// Function..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in High School Program ( Version 4 ) ..\n\n");
}

// mathematics Function;
int mathematicsFun()
{
    int mathematics = 100, mathematics_d;
    printf("Mathematics degree ? ");
    scanf("%d", &mathematics_d);
    mathematics = mathematics - mathematics_d;
    return mathematics;
}

// Arabic Function;
int arabicFun()
{
    int arabic = 100, arabic_d;
    printf("Arabic degree ? ");
    scanf("%d", &arabic_d);
    arabic = arabic - arabic_d;
    return arabic;
}

// chemistry Function;
int chemistryFun()
{
    int chemistry = 100, chemistry_d;
    printf("chemistry degree ? ");
    scanf("%d", &chemistry_d);
    chemistry = chemistry - chemistry_d;
    return chemistry;
}

// history Function;
int historyFun()
{
    int history = 100, history_d;
    printf("history degree ? ");
    scanf("%d", &history_d);
    history = history - history_d;
    return history;
}

// geography Function;
int geographyFun()
{
    int geography = 100, geography_d;
    printf("geography degree ? ");
    scanf("%d", &geography_d);
    geography = geography - geography_d;
    return geography;
}

// physics Function;
int physicsFun()
{
    int physics = 100, physics_d;
    printf("physics degree ? ");
    scanf("%d", &physics_d);
    physics = physics - physics_d;
    return physics;
}

// total function;
int totalFun()
{
    int mathematics = mathematicsFun();
    int arabic = arabicFun();
    int chemistry = chemistryFun();
    int history = historyFun();
    int geography = geographyFun();
    int physics = physicsFun();

    int total = mathematics + arabic + chemistry + history + geography + physics;
    printf("\nTotal missing marks : %d\n\n\n", total);
}
