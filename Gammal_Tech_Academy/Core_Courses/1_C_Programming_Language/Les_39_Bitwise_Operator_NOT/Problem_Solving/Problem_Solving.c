//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    char binaryInput[9];
    scanf("%s", binaryInput);
    unsigned char lightingMode = (unsigned char)strtol(binaryInput, NULL, 2);
    unsigned char invertedMode = ~lightingMode;
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (invertedMode >> i) & 1);
    }

    printf("\n\n");

    return 0;
}