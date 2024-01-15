

/* >>> Doubles Value Using XOR Program ( Version 3 ) <<< */

/* >>> Program multiplies the value of a variable using (using the Left Shift). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void doublesValueFun(int num);

int main()
{
    welcomeMassageFun();

    int num = 5;
    printf("Before Doubles Value : num 1 = %d\n", num);

    doublesValueFun(num);

    return 0;
}

// Functions ..
// Welcome massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Doubles Value Using XOR Program ( Version 3 ) ..\n\n");
}

// doubles Value function;
void doublesValueFun(int num)
{
    num = num << 1;
    printf("After Doubles Value : num 1 = %d\n\n", num);
}