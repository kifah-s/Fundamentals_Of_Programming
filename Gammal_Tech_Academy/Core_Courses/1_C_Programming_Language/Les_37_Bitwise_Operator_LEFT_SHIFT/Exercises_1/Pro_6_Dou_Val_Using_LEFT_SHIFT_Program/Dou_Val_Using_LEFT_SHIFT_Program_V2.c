

/* >>> Doubles Value Using LEFT SHIFT Program ( Version 2 ) <<< */

/* >>> Program multiplies the value of a variable using (using the Left Shift). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void doublesValueFun(int *num);

int main()
{
    welcomeMassageFun();

    int num = 5;
    printf("Before Doubles Value : num = %d\n", num);

    doublesValueFun(&num);

    printf("After Doubles Value : num = %d\n\n", num);

    return 0;
}

// Functions ..
// Welcome massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Doubles Value Using LEFT SHIFT Program ( Version 2 ) ..\n\n");
}

// doubles Value function;
void doublesValueFun(int *num)
{
    *num = *num << 1;
}