

/* >>> Convert Weight From KG To TON Program <<< */

/* >>> Program that converts weight from kg to ton (ton = 1000 kg). <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Convert Weight From KG To TON Program ..\n\n");

    int weight;

    printf("Enter your weight in KG : ");
    scanf("%d", &weight);
    weight = weight * 1000;

    printf("\nYour weight in TON : %d ton\n\n\n", weight);

    return 0;
}