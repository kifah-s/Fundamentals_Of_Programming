

/* >>> Cars Program ( Version 1 ) <<< */

/* >>> Cars program : Before going to a long drive, you need to make sure there's enough gasoline in the car to go to the trip.
Required : write a program that asks the person how many litres of gasoline in the car and prints it how many kilo metres a car can cut without having to add gasoline. (If the liter of gasoline is enough for 23 km) <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Cars Program ( Version 1 ) ..\n\n");

    int liters,
        kiloM;

    printf("How many liters of petrol in the car : ");
    scanf("%d", &liters);

    kiloM = liters * 23;
    printf("\nThe car can cover a distance : %d KM\n\n\n", kiloM);

    return 0;
}