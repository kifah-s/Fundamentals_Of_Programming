

//* Missing Grades Program.

//* Write a program that asks the student for their grades in 5 subjects and prints the total and the missing grades total = 500.

/*
! Input:
! Please enter your grades in 5 subjects:
! Sub 1 = 90
! Sub 2 = 80
! Sub 3 = 70
! Sub 4 = 100
! Sub 5 = 75

! Output:
! Total Marks: 415
! Missing Marks: 85
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingSub1Fun(int x);
int gettingSub2Fun(int x);
int gettingSub3Fun(int x);
int gettingSub4Fun(int x);
int gettingSub5Fun(int x);
int calculatingTotalMarksFun(int s1, int s2, int s3, int s4, int s5, int totMar);
int calculatingMissingMarksFun(int totMar, int misMar);
void printTotalAndMissingMarksFun(int totMar, int misMar);

int main()
{
    welcomeMessageFun();

    // Declare variables.
    int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0;
    int totalMarks = 0, missingMarks = 0;

    sub1 = gettingSub1Fun(sub1);
    sub2 = gettingSub2Fun(sub2);
    sub3 = gettingSub3Fun(sub3);
    sub4 = gettingSub4Fun(sub4);
    sub5 = gettingSub5Fun(sub5);
    totalMarks = calculatingTotalMarksFun(sub1, sub2, sub3, sub4, sub5, totalMarks);
    missingMarks = calculatingMissingMarksFun(totalMarks, missingMarks);
    printTotalAndMissingMarksFun(totalMarks, missingMarks);

    printf("\n\n\n");

    return 0;
}

//* Functions ..
// Welcome message function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Missing Grades Program ..\n\n");
}

// Getting Sub 1 Function.
int gettingSub1Fun(int x)
{
    printf("Please enter your grades in 5 subjects:\n");
    printf("Sub 1: ");
    scanf("%i", &x);

    return x;
}

// Getting Sub 2 Function.
int gettingSub2Fun(int x)
{
    printf("Sub 2: ");
    scanf("%i", &x);

    return x;
}

// Getting Sub 3 Function.
int gettingSub3Fun(int x)
{
    printf("Sub 3: ");
    scanf("%i", &x);

    return x;
}

// Getting Sub 4 Function.
int gettingSub4Fun(int x)
{
    printf("Sub 4: ");
    scanf("%i", &x);

    return x;
}

// Getting Sub 5 Function.
int gettingSub5Fun(int x)
{
    printf("Sub 5: ");
    scanf("%i", &x);

    return x;
}

// calculating total marks function.
int calculatingTotalMarksFun(int s1, int s2, int s3, int s4, int s5, int totMar)
{
    totMar = s1 + s2 + s3 + s4 + s5;
    return totMar;
}

// calculating Missing Marks function.
int calculatingMissingMarksFun(int totMar, int misMar)
{
    misMar = 500 - totMar;
    return misMar;
}

// Print total and missing marks function.
void printTotalAndMissingMarksFun(int totMar, int misMar)
{
    printf("\nTotal Marks: %i \nMissing Marks: %i", totMar, misMar);
}
//* End Function ..
