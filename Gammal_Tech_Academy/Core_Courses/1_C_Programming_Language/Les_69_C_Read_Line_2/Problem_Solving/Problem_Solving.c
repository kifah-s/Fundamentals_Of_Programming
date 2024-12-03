//* >>>>> Problem Solving <<<<< */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char macroName[50];
    int value;
} Macro;

typedef struct
{
    char fileName[50];
    int macroCount;
    Macro *macros;
} HeaderFile;

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

    int n, i, j, k;
    scanf("%d", &n);

    HeaderFile *files = malloc(n * sizeof(HeaderFile));
    for (i = 0; i < n; i++)
    {
        scanf("%s %d", files[i].fileName, &files[i].macroCount);
        files[i].macros = malloc(files[i].macroCount * sizeof(Macro));
        for (j = 0; j < files[i].macroCount; j++)
        {
            scanf("%s %d", files[i].macros[j].macroName,
                  &files[i].macros[j].value);
        }
    }

    int conflictFound = 0;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < files[i].macroCount; j++)
        {
            for (k = i + 1; k < n; k++)
            {
                for (int l = 0; l < files[k].macroCount; l++)
                {
                    if (strcmp(files[i].macros[j].macroName,
                               files[k].macros[l].macroName) == 0 &&
                        files[i].macros[j].value !=
                            files[k].macros[l].value)
                    {
                        if (!conflictFound)
                        {
                            printf("%s: %s, ",
                                   files[i].macros[j].macroName, files[i].fileName);
                            conflictFound = 1;
                        }
                        printf("%s, ", files[k].fileName);
                    }
                }
            }
            if (conflictFound)
            {
                printf("\b\b \n");
                conflictFound = 0;
            }
        }
    }
    if (!conflictFound)
    {
        printf("No conflicts detected.\n");
    }
    for (i = 0; i < n; i++)
    {
        free(files[i].macros);
    }

    free(files);

    printf("\n\n");

    return 0;
}