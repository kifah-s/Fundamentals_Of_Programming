

//* Car Program (Version 1).

/*
 * Create a program that uses a struct named Car to represent information about a car,
 * including its model and price. Instead of initializing the variables directly,
 * prompt the user to input data for two cars and print their information.
 */

/*
! Input:
! Please enter details for car 1:
! model: toyota
! price: 5000

! Please enter details for car 2:
! model: honda
! price: 7000


! Output:
! Car 1:
! Model: toyota
! Price: 5000

! Car 2:
! Model: honda
! Price: 7000
*/

#include <stdio.h>
#include <string.h>

//* Struct ..
struct Car
{
    char model[25];
    int price;
};
//* End Struct

void welcomeMessageFun();
void carInformationFun(struct Car c, struct Car c2);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Struct.
    struct Car car1, car2;

    // Calling Functions.
    carInformationFun(car1, car2);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Car Program (Version 1) ..\n\n");
}

//  Car information - Function.
void carInformationFun(struct Car c1, struct Car c2)
{
    printf("Please enter details for car 1:\n");
    printf("model:");
    scanf("%s", c1.model);
    printf("price:");
    scanf("%d", &c1.price);

    printf("\nPlease enter details for car 2:\n");
    printf("model:");
    scanf("%s", c2.model);
    printf("price:");
    scanf("%d", &c2.price);

    printf("\n\nCar 1:\n");
    printf("Model: %s\n", c1.model);
    printf("Price: %d\n", c1.price);
    
    printf("\n\nCar 2:\n");
    printf("Model: %s\n", c2.model);
    printf("Price: %d\n", c2.price);
}

//* End Function ..
