

/* >>> 3D Array Program ( Version 2 ) <<< */

/* >>> A program that asks a person to enter 3 digits expressing the size of the 3D array and records the numbers to be written and printed at the other and printed together. <<< */

#include <stdio.h>

void welcomeMassageFun();
int array_3d();

int main()
{
    welcomeMassageFun();
    array_3d();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 3D Array Program ( Version 2 ) ..\n\n");
}

// array 3d function;
int array_3d()
{
    // Declaration the variables;
    int num_1, num_2, num_3;

    // Receive values from the user;
    printf("Please enter three numbers that represent the size and dimension of the array : \n");
    printf("The first number - the first dimension : ");
    scanf("%d", &num_1);

    printf("The second number - the second dimension : ");
    scanf("%d", &num_2);

    printf("Number three - third dimension : ");
    scanf("%d", &num_3);

    // Declaration the array;
    int arr[num_1][num_2][num_3];

    // Printing the variables;
    printf("\nSize array is : [%d][%d][%d]", num_1, num_2, num_3);

    // Summing the variables;
    printf("\n\nSum numbers is : %d", num_1 + num_2 + num_3);

    printf("\n\n\n");
}