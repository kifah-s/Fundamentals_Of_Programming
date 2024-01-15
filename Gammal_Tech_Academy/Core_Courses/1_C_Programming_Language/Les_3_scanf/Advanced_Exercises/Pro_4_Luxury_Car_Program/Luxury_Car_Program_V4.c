

/* >>> Luxury Car Programme ( Version 4 ) <<< */

/* >>> Each of us dreams of owning many luxurious cars.
Required : A program that asks the user how many cars he owns now and how many cars he wants, then prints the rest of the cars for him. <<< */

#include <stdio.h>

void welMasFun();
int carFun();

int main()
{
    welMasFun();
    carFun();

    return 0;
}

// Functions;
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Luxury Car Programme ( Version 4 ) ..\n\n");
}

// Car function;
int carFun()
{
    int car_have,
        car_need,
        result;

    printf("The number of cars you have : ");
    scanf("%d", &car_have);

    printf("The number of cars you need : ");
    scanf("%d", &car_need);

    result = car_need - car_have;

    printf("\nResidual : %d\n\n\n", result);
}