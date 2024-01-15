

/* >>> 3D Array Program ( Version 4 ) <<< */

/* >>> A program that asks a person to enter 3 digits expressing the size of the 3D array and records the numbers to be written and printed at the other and printed together. <<< */

#include <stdio.h>

// struct MyStruct;
struct MyStruct
{
    int num_1;
    int num_2;
    int num_3;
};

void welcomeMassageFun();
struct MyStruct array_3d();
int declarationArray();

int main()
{
    welcomeMassageFun();

    declarationArray();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in 3D Array Program ( Version 4 ) ..\n\n");
}

// array 3d function;
struct MyStruct array_3d()
{
    struct MyStruct num;

    // Receive values from the user;
    printf("Please enter three numbers that represent the size and dimension of the array : \n");
    printf("The first number - the first dimension : ");
    scanf("%d", &num.num_1);

    printf("The second number - the second dimension : ");
    scanf("%d", &num.num_2);

    printf("Number three - third dimension : ");
    scanf("%d", &num.num_3);

    return num;
}

// Declaration the array;
int declarationArray()
{
    struct MyStruct my_struct;
    my_struct = array_3d();
    /* // Ensure that the data is received
    printf("%d - %d - %d", my_struct.num_1, my_struct.num_2, my_struct.num_3); */
    int num_1 = my_struct.num_1;
    int num_2 = my_struct.num_2;
    int num_3 = my_struct.num_3;
    
    int arr[num_1][num_2][num_3];

    // Printing the variables;
    printf("\nSize array is : [%d][%d][%d]", num_1, num_2, num_3);

    // Summing the variables;
    printf("\n\nSum numbers is : %d", num_1 + num_2 + num_3);

    printf("\n\n\n");
}