

/* >>> Objectives Program ( Version 6 ) <<< */

/* >>> Objectives Program : Every person has some goals that he dreams of achieving in his life and you always have to make your goals ahead of you to remember them constantly..
Required : write a program that prints out the goals you dream of achieving. <<< */

#include <stdio.h>

void welcome_massage(char massage[]);
void objectives(char obj[]);
void professional(char pro[]);
void buying(char buy[]);
void traveling(char tra[]);
void fitness(char fit[]);

int main()
{
    char massage[] = {"You welcome in Objectives Program ( Version 6 ) .."};
    welcome_massage(massage);

    char obj[] = {"My Objectives is : \n"};
    char pro[] = {"- Professional software engineer\n"};
    char buy[] = {"- Buying a car\n"};
    char tra[] = {"- Traveling\n"};
    char fit[] = {"- Fitness body\n\n\n"};
    objectives(obj);
    professional(pro);
    buying(buy);
    traveling(tra);
    fitness(fit);

    return 0;
}

// Function ..
// Welcome massage function;
void welcome_massage(char massage[])
{
    printf("\n\n%s\n\n", massage);
}

// Objectives function;
void objectives(char obj[])
{
    printf("%s", obj);
}

// professional function;
void professional(char pro[])
{
    printf("%s", pro);
}

// buying function;
void buying(char buy[])
{
    printf("%s", buy);
}

// traveling function;
void traveling(char tra[])
{
    printf("%s", tra);
}

// fitness function;
void fitness(char fit[])
{
    printf("%s", fit);
}