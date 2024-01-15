

/* >>> High School Program ( Version 2 ) <<< */

/* >>> sharif finished his high school exams, and when the result appeared, he wanted to calculate the number of grades he had lost.
Required : Write a program that asks the person about his grades in 6 different subjects, assuming that each subject is out of 100, and then prints a missing score in all subjects. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in High School Program ( Version 2 ) ..\n\n");

    int mathematics_d, Arabic_d, Chemistry_d, history_d, Geography_d, Physics_d;

    int total;

    printf("Mathematics degree ? ");
    scanf("%d", &mathematics_d);

    printf("Arabic degree ? ");
    scanf("%d", &Arabic_d);

    printf("Chemistry degree ? ");
    scanf("%d", &Chemistry_d);

    printf("History degree ? ");
    scanf("%d", &history_d);

    printf("Geography degree ? ");
    scanf("%d", &Geography_d);

    printf("Physics degree ? ");
    scanf("%d", &Physics_d);

    total = (100 - mathematics_d) + (100 - Arabic_d) + (100 - Chemistry_d) + (100 - history_d) + (100 - Geography_d) + (100 - Physics_d);
    printf("\nTotal missing marks : %d\n\n\n", total);
    return 0;
}