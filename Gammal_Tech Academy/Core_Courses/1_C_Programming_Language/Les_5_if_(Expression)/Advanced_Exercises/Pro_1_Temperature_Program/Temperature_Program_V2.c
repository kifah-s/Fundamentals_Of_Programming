

/* >>> Temperature Program ( Version 2 ) <<< */

/* >>> Temperature Program : In the summer, we turn on the air conditioner in order to control the temperature to make it lower.
Required : Write a program if the temperature is above 30 degrees Celsius, it prints "turn on AC", otherwise it prints "Temp is fine". <<< */

#include <stdio.h>

void welcomeMassageFun();
int temperatureFun();

int main()
{
    welcomeMassageFun();
    temperatureFun();
    
    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Temperature Program ( Version 2 ) ..\n\n");
}

// Temperature function;
int temperatureFun()
{
    int temperature;

    printf("Please enter Temperature : ");
    scanf("%d", &temperature);

    if (temperature > 30)
    {
        printf("\nTurn on AC\n\n\n");
    }
    else
    {
        printf("\nTemp is fine\n\n\n");
    }
}