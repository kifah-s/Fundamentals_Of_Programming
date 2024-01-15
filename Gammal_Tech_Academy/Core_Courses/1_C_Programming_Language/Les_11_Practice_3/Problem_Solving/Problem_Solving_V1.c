

/* >>> Problem Solving ( Version 1 ) <<< */

/* >>> Problem statement

Foad finished his Thanway Amma exams, and he is looking for a highly ranked   university to study Computer Science degree. Then, He started to do a college list   with the admission criteria for each college.

After long research, he found his dream university in the UK, but he got frustrated by   his marks. In fact, his marks may decrease the chance of getting into his dream   university. The admission criteria of the university in terms of school subjects

He must obtain more than or equal 65 in Math ( m ), more than or equal 55 in physics  ( p ),   and more than or equal 50 in Chemistry ( c ). All must be with a total of more  than or equal to 190, or to obtain more than or equal 140 in Math and Physics. Can  you  solve foad's problem, and tell him if he can be admitted or not into his dream  university.



Input

The first line of the input contains one integer m (m ≥ 0 ), the second line is one integer p (p ≥ 0), and the third is c (c  ≥ 0).

Output

Print if Foad will pass the admission phase at the university or not. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Problem Solving ( Version 1 ) ..\n\n");

    int math, physics, chemistry, total, math_and_physics;

    printf("Please enter the marks of this subjects :");

    printf("\n\n1 - Math : ");
    scanf("%d", &math);

    printf("\n2 - Physics : ");
    scanf("%d", &physics);

    printf("\n3 - Chemistry : ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;
    math_and_physics = math + physics;

    if (math >= 65 && physics >= 55 && chemistry >= 50 && total >= 190 || math_and_physics >= 140)
    {
        printf("\nCongrats, you will pass the admission phase at the university");
    }
    else
    {
        printf("\nsorry about that, you will not pass the admission phase at the university");
    }

    printf("\n\n\n");

    return 0;

}