

/* >>> Doubles Value Using XOR Program ( Version 4 ) <<< */

/* >>> Program multiplies the value of a variable using (using the Left Shift). <<< */

#include <stdio.h>
#include <string.h>

void welcomeMassageFun();
void doublesValueFun(int num);

int main()
{
    welcomeMassageFun();

    int num = 0;
    
    printf("Please enter number : ");
    scanf("%d", &num);

    printf("\nBefore Doubles Value : num = %d\n", num);

    doublesValueFun(num);

    return 0;
}

// Functions ..
// Welcome massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Doubles Value Using XOR Program ( Version 4 ) ..\n\n");
}

// doubles Value function;
void doublesValueFun(int num)
{
    num = num << 1;
    printf("After Doubles Value : num = %d\n\n", num);
}