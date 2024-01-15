

/* >>> High School Program ( Version 1 ) <<< */

/* >>> sharif finished his high school exams, and when the result appeared, he wanted to calculate the number of grades he had lost.
Required : Write a program that asks the person about his grades in 6 different subjects, assuming that each subject is out of 100, and then prints a missing score in all subjects. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in High School Program ( Version 1 ) ..\n\n");

    int mathematics = 100, Arabic = 100, Chemistry = 100, history = 100, Geography = 100, Physics = 100;

    int mathematics_d, Arabic_d, Chemistry_d, history_d, Geography_d, Physics_d;

    int total;

    printf("Mathematics degree ? ");
    scanf("%d", &mathematics_d);
    mathematics = mathematics - mathematics_d;

    printf("Arabic degree ? ");
    scanf("%d", &Arabic_d);
    Arabic = Arabic - Arabic_d;

    printf("Chemistry degree ? ");
    scanf("%d", &Chemistry_d);
    Chemistry = Chemistry - Chemistry_d;

    printf("History degree ? ");
    scanf("%d", &history_d);
    history = history - history_d;

    printf("Geography degree ? ");
    scanf("%d", &Geography_d);
    Geography = Geography - Geography_d;

    printf("Physics degree ? ");
    scanf("%d", &Physics_d);
    Physics = Physics - Physics_d;

    total = mathematics + Arabic + Chemistry + history + Geography + Physics;
    printf("\nTotal missing marks : %d\n\n\n", total);

    return 0;
}