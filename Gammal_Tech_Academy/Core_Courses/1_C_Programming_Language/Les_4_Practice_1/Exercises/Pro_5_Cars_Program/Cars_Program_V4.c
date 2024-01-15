

/* >>> Cars Program ( Version 4 ) <<< */

/* >>> Cars program : Before going to a long drive, you need to make sure there's enough gasoline in the car to go to the trip.
Required : write a program that asks the person how many litres of gasoline in the car and prints it how many kilo metres a car can cut without having to add gasoline. (If the liter of gasoline is enough for 23 km) <<< */

#include <stdio.h>

void welMasFun();
int litersFun();
int kiloMFun();

int main()
{
    welMasFun();
    kiloMFun();

    return 0;
}

// Function..
// Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Cars Program ( Version 4 ) ..\n\n");
}

// Liters function;
int litersFun()
{
    int liters;
    printf("How many liters of petrol in the car : ");
    scanf("%d", &liters);
    return liters;
}

// kiloM function;
int kiloMFun()
{
    int liters = litersFun();

    int kiloM;

    kiloM = liters * 23;
    printf("\nThe car can cover a distance : %d KM\n\n\n", kiloM);
}