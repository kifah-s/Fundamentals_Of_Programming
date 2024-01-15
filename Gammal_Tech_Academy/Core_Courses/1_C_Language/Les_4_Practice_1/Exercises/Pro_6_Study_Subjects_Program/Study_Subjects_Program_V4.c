

/* >>> Study Subjects Program ( Version 4 ) <<< */

/* >>> Study subjects program : In one school after performing the exams of 5 subjects each from 100 degrees, and the grades of 5 subjects emerged, some students wanted to calculate their total and the total grades they lack to try next year to reduce this difference.
Required : Write a program that asks the student for his grades in the 5 subjects and the program prints the total and total grades missing <<< */

#include <stdio.h>

void welMasFun();

int firstSubDegreeFun();
int secondSubDegreeFun();
int thirdSubDegreeFun();
int forthSubDegreeFun();
int fifthSubDegreeFun();

int totalScoreFun();
int totalMissingScoreFun();
int main()
{
    welMasFun();

    totalMissingScoreFun();

    return 0;
}

// Functions ..
//  Welcome massage function;
void welMasFun()
{
    printf("\n\nYou welcome in Study Subjects Program ( Version 4 ) ..\n\n");
}

// First SUB degree function;
int firstSubDegreeFun()
{
    int mS1D;
    printf("First SUB degree : ");
    scanf("%d", &mS1D);
    return mS1D;
}

// Second SUB degree function;
int secondSubDegreeFun()
{
    int mS2D;
    printf("Second SUB degree : ");
    scanf("%d", &mS2D);
    return mS2D;
}

// Third SUB degree function;
int thirdSubDegreeFun()
{
    int mS3D;
    printf("Third SUB degree : ");
    scanf("%d", &mS3D);
    return mS3D;
}

// Forth SUB degree function;
int forthSubDegreeFun()
{
    int mS4D;
    printf("Forth SUB degree : ");
    scanf("%d", &mS4D);
    return mS4D;
}

// Fifth SUB degree function;
int fifthSubDegreeFun()
{
    int mS5D;
    printf("Fifth SUB degree : ");
    scanf("%d", &mS5D);
    return mS5D;
}

// Total score function;
int totalScoreFun()
{
    int mS1D = firstSubDegreeFun();
    int mS2D = secondSubDegreeFun();
    int mS3D = thirdSubDegreeFun();
    int mS4D = forthSubDegreeFun();
    int mS5D = fifthSubDegreeFun();

    int totalScores = mS1D + mS2D + mS3D + mS4D + mS5D;
    printf("\nThe total scores : %d\n\n", totalScores);
    return totalScores;
}

// Total missing scores function;
int totalMissingScoreFun()
{
    int mS = 500;
    int totalScores = totalScoreFun();
    int totalMissingScores = mS - totalScores;
    printf("The total missing scores : %d\n\n\n", totalMissingScores);
}