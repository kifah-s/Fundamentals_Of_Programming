

/* >>> Convert Weight From KG To TON Program ( Version 1 ) <<< */

/* >>> Program that converts weight from kg to ton (ton = 1000 kg). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Convert Weight From KG To TON Program ( Version 1 ) ..\n\n");

    int weight;

    printf("Enter your weight in KG : ");
    scanf("%d", &weight);
    weight = weight * 1000;

    printf("\nYour weight in TON : %d ton\n\n\n", weight);

    return 0;
}