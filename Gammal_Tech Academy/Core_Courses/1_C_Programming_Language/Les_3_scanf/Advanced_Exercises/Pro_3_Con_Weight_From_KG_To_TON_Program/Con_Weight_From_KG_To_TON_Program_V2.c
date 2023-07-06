

/* >>> Convert Weight From KG To TON Program ( Version 2 ) <<< */

/* >>> Program that converts weight from kg to ton (ton = 1000 kg). <<< */

#include <stdio.h>

void welMasFun();
int fromKGtoTON();

int main()
{
    welMasFun();
    fromKGtoTON();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Convert Weight From KG To TON Program ( Version 2 ) ..\n\n");
}

// Convert Weight From KG To TON function;
int fromKGtoTON()
{
    int weight;

    printf("Enter your weight in KG : ");
    scanf("%d", &weight);
    weight = weight * 1000;

    printf("\nYour weight in TON : %d ton\n\n\n", weight);
}