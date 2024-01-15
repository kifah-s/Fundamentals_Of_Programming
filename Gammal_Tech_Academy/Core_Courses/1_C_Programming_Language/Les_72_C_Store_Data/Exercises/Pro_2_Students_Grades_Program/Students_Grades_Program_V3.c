

/* >>> Students Grades Program ( Version 3 ) <<< */

/* >>> A program to register students' grades after the exam.
   Required: Write a program that has 2 files and enrolls girls in file and boys in file tan where the user is asked every time he enters type 1/2 where 1 means (male) and 2 means (female) and on the basis of which he selects the file in which he will register. At the end, he prints all the file on the screen. <<< */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void welcomeMassageFun();
int maleOrFemaleFun(int maleOrFemale);
int maleFileFun(FILE *maleFile, char name[50], char grade[10]);
int femaleFileFun(FILE *femaleFile, char name[50], char grade[10]);
int studentScoreRecordingFun(int maleOrFemale, FILE *maleFile, FILE *femaleFile, char name[50], char grade[10]);
int printFilesInTerminalFun(FILE *maleFile, FILE *femaleFile, char x);

int main()
{
    welcomeMassageFun();

    int maleOrFemale = 0;
    char name[50], grade[10], x;
    FILE *maleFile, *femaleFile;

    printFilesInTerminalFun(maleFile, femaleFile, x);

    maleOrFemale = maleOrFemaleFun(maleOrFemale);
    // printf("\n%d\n\n", maleOrFemale); // Check.

    studentScoreRecordingFun(maleOrFemale, maleFile, femaleFile, name, grade);

    printFilesInTerminalFun(maleFile, femaleFile, x);

    return 0;
}

// Functions ..
// Welcome massage / Function.
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Students Grades Program ( Version 3 ) ..\n\n");
}

// Male or female / Function.
int maleOrFemaleFun(int maleOrFemale)
{
    while (maleOrFemale < 1 || maleOrFemale > 2)
    {
        printf("If you want to record the grades of male students, choose 1, and if you want female students, choose 2: ");
        scanf("%d", &maleOrFemale);
    }

    return maleOrFemale;
}

// male file / Function.
int maleFileFun(FILE *maleFile, char name[50], char grade[10])
{
    maleFile = fopen("male_file.txt", "a+");

    printf("\nplease enter full name student: ");
    scanf(" %49[^\n]", name);

    printf("please enter student grade: ");
    scanf(" %9[^\n]", grade);

    fprintf(maleFile, "name: %s - grade: %s\n", name, grade);

    fclose(maleFile);
}

// female file / Function.
int femaleFileFun(FILE *femaleFile, char name[50], char grade[10])
{
    femaleFile = fopen("female_file.txt", "a+");
    
    printf("\nplease enter full name student: ");
    scanf(" %49[^\n]", name);

    printf("please enter student grade: ");
    scanf(" %9[^\n]", grade);

    fprintf(femaleFile, "name: %s - grade: %s\n", name, grade);

    fclose(femaleFile);
}

// Student score recording / Function.
int studentScoreRecordingFun(int maleOrFemale, FILE *maleFile, FILE *femaleFile, char name[50], char grade[10])
{
    if (maleOrFemale == 1)
    {
        maleFileFun(maleFile, name, grade);
    }
    else if (maleOrFemale == 2)
    {
        femaleFileFun(femaleFile, name, grade);
    }
}

// Print files in terminal / Function.
int printFilesInTerminalFun(FILE *maleFile, FILE *femaleFile, char x)
{
    printf("\nmale file ...\n");
    maleFile = fopen("male_file.txt", "a+");
    while (fscanf(maleFile, "%c", &x) != EOF)
    {
        printf("%c", x);
    }

    printf("\nfemale file ...\n");
    femaleFile = fopen("female_file.txt", "a+");
    while (fscanf(femaleFile, "%c", &x) != EOF)
    {
        printf("%c", x);
    }

    printf("\n\n");
}