//* >>>>> Problem Solving <<<<< */

#include <stdio.h>

//* Functions ..
// Print Problem Solving / Function.
void problemSolvingFun()
{
    printf("\nProblem Solving ..\n\n");
}

// Function to calculate the Smart Match Score
int calculateSmartMatchScore(const int *attributes1, const int *attributes2, const int size)
{
    int score = 0;
    for (int i = 0; i < size; i++)
    {
        score += (attributes1[i] > attributes2[i]) ? attributes1[i] : attributes2[i];
    }
    return score;
}
//* End Functions ..

int main()
{
    problemSolvingFun();

    int T, attributes1[10], attributes2[10], size;
    // Reading the number of test cases
    scanf("%d", &T);
    while (T--)
    {
        // Assuming the size of attributes is fixed and known, e.g., 3
        size = 3;
        // Reading attributes for the first individual
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &attributes1[i]);
        }
        // Reading attributes for the second individual
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &attributes2[i]);
        }
        // Calculating and printing the Smart Match Score
        printf("%d\n", calculateSmartMatchScore(attributes1, attributes2, size));

        printf("\n\n");

        return 0;
    }