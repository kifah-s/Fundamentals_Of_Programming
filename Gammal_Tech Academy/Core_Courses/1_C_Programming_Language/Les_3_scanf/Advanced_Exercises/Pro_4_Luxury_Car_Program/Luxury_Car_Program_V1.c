

/* >>> Luxury Car Programme ( Version 1 ) <<< */

/* >>> Each of us dreams of owning many luxurious cars.
Required : A program that asks the user how many cars he owns now and how many cars he wants, then prints the rest of the cars for him. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Luxury Car Programme ( Version 1 ) ..\n\n");

    int car_have,
        car_need;

    printf("The number of cars you have : ");
    scanf("%d", &car_have);

    printf("The number of cars you need : ");
    scanf("%d", &car_need);

    printf("\nResidual : %d\n\n\n", car_need - car_have);

    return 0;
}