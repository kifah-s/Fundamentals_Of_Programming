

/* >>> From Num To Num Program ( Version 6 ) <<< */

/* >>> A program that asks a person to enter two numbers and prints the numbers from the first to the second and prints the total numbers. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getFirstNumberFun();
int getSecondNumberFun();
int from_num_to_num(int glo_var_1, int glo_var_2);

int main()
{
    welcomeMassageFun();

    int glo_var_1 = getFirstNumberFun();
    int glo_var_2 = getSecondNumberFun();
    from_num_to_num(glo_var_1, glo_var_2);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in From Num To Num Program ( Version 6 ) ..\n\n");
}

// get first number function;
int getFirstNumberFun()
{
    int glo_var_1;
    // Receive values from the user;
    printf("Please enter first number : ");
    scanf("%d", &glo_var_1);

    printf("\n");

    return glo_var_1;
}

// get second number function;
int getSecondNumberFun()
{
    int glo_var_2;
    // Receive values from the user;
    printf("Please enter second number : ");
    scanf("%d", &glo_var_2);

    printf("\n");

    return glo_var_2;
}

// from num to num function;
int from_num_to_num(int glo_var_1, int glo_var_2)
{
    // Declaration the counter, variable and Printing numbers;
    int i, sum = 0;
    for (i = glo_var_1; i <= glo_var_2; i++)
    {
        printf("%d  ", i);
        sum = sum + i;
    }
    printf("\n\nSum numbers = %d", sum);

    printf("\n\n\n");
}