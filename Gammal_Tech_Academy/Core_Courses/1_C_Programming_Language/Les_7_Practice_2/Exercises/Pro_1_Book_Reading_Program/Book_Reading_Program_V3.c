

/* >>> Book Reading Program ( Version 3 ) <<< */

/* >>> A program that asks the user about the number of pages of the book and how many pages he has read to date and then prints the number of days needed for the user to finish reading all the book. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Book Reading Program ( Version 3 ) ..\n\n");

    int number_pages_Book, number_pages_Reading, average_reading_in_day, result;

    printf("Please enter the number of pages of the book : ");
    scanf("%d", &number_pages_Book);

    printf("Please enter The number of pages read from the book : ");
    scanf("%d", &number_pages_Reading);

    printf("Please enter the average reading in day : ");
    scanf("%d", &average_reading_in_day);

    result = (number_pages_Book - number_pages_Reading) / average_reading_in_day;

    printf("\nThe number of days required to read the entire book : %d Days\n\n\n", result);

    return 0;
}