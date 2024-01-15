

/* >>> Objectives Program ( Version 5 ) <<< */

/* >>> Objectives Program : Every person has some goals that he dreams of achieving in his life and you always have to make your goals ahead of you to remember them constantly..
Required : write a program that prints out the goals you dream of achieving. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void objectives(char objectives[]);

int main()
{
    char massage[] = {"You welcome in Objectives Program ( Version 5 ) .."};
    welcome_massage(massage);

    char objective[] = {"My Objectives is : \n"};
    char professional[] = {"- Professional software engineer\n"};
    char buying[] = {"- Buying a car\n"};
    char traveling[] = {"- Traveling\n"};
    char fitness[] = {"- Fitness body\n\n\n"};
    objectives(objective);
    objectives(professional);
    objectives(buying);
    objectives(traveling);
    objectives(fitness);

    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage(char massage[])
{
    printf("\n\n%s\n\n", massage);
}

// Objectives function;
void objectives(char objectives[])
{
    printf("%s", objectives);
}