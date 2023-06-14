

/* >>> Objectives Program ( Version 14 ) <<< */

/* >>> Objectives Program : Every person has some goals that he dreams of achieving in his life and you always have to make your goals ahead of you to remember them constantly..
Required : write a program that prints out the goals you dream of achieving. <<< */

#include <stdio.h>

char *welcome_massage(char massage[]);
char *objectives(char obj[]);
char *professional(char pro[]);
char *buying(char buy[]);
char *traveling(char tra[]);
char *fitness(char fit[]);

int main()
{
    char massage[] = {"\n\nYou welcome in Objectives Program ( Version 14 ) ..\n\n"};
    char *mas[] = {welcome_massage(massage)};
    /* printf(*mas); */
    printf("%s", *mas);

    char obj[] = {"My Objectives is : \n\n"};
    char *o[] = {objectives(obj)};
    /* printf(*o); */
    printf("%s", *o);

    char pro[] = {"- Professional software engineer\n"};
    char *p[] = {professional(pro)};
    /* printf(*p); */
    printf("%s", *p);

    char buy[] = {"- Buying a car\n"};
    char *b[] = {buying(buy)};
    /* printf(*b); */
    printf("%s", *b);

    char tra[] = {"- Traveling\n"};
    char *t[] = {traveling(tra)};
    /* printf(*t); */
    printf("%s", *t);

    char fit[] = {"- Fitness body\n\n\n"};
    char *f[] = {fitness(fit)};
    /* printf(*f); */
    printf("%s", *f);

    return 0;
}

// Function ..
// Welcome massage function;
char *welcome_massage(char massage[])
{
    /* printf("\n\n%s\n\n", massage); */
    return massage;
}

// Objectives function;
char *objectives(char obj[])
{
    /* printf("%s", obj); */
    return obj;
}

// professional function;
char *professional(char pro[])
{
    /* printf("%s", pro); */
    return pro;
}

// buying function;
char *buying(char buy[])
{
    /* printf("%s", buy); */
    return buy;
}

// traveling function;
char *traveling(char tra[])
{
    /* printf("%s", tra); */
    return tra;
}

// fitness function;
char *fitness(char fit[])
{
    /* printf("%s", fit); */
    return fit;
}