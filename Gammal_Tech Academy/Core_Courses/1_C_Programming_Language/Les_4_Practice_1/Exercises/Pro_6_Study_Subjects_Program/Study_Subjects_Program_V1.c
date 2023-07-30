

/* >>> Study Subjects Program ( Version 1 ) <<< */

/* >>> Study subjects program : In one school after performing the exams of 5 subjects each from 100 degrees, and the grades of 5 subjects emerged, some students wanted to calculate their total and the total grades they lack to try next year to reduce this difference.
Required : Write a program that asks the student for his grades in the 5 subjects and the program prints the total and total grades missing <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Study Subjects Program ( Version 1 ) ..\n\n");

    int m_s1, m_s2, m_s3, m_s4, m_s5,
        total_scores, total_missing_scores;

    printf("First SUB degree : ");
    scanf("%d", &m_s1);
    printf("Second SUB degree : ");
    scanf("%d", &m_s2);
    printf("Three SUB degree : ");
    scanf("%d", &m_s3);
    printf("Forth SUB degree : ");
    scanf("%d", &m_s4);
    printf("Fifth SUB degree : ");
    scanf("%d", &m_s5);
    printf("\nSubjects results : %d , %d , %d , %d , %d\n\n", m_s1, m_s2, m_s3, m_s4, m_s5);

    total_scores = m_s1 + m_s2 + m_s3 + m_s4 + m_s5;
    printf("The total scores : %d\n\n", total_scores);

    total_missing_scores = (100 - m_s1) + (100 - m_s2) + (100 - m_s3) + (100 - m_s4) + (100 - m_s5);
    printf("The total missing scores : %d\n\n\n", total_missing_scores);

    return 0;
}