

/* >>> Book Reading Program ( Version 5 ) <<< */

/* >>> A program that asks the user about the number of pages of the book and how many pages he has read to date and then prints the number of days needed for the user to finish reading all the book. <<< */

#include <stdio.h>

void welcomeMassageFun();
int numberPageBookFun();
int numberPagesReadingFun();
int averageReadingInDayFun();
int bookReadingFun(int number_pages_Book, int number_pages_Reading, int average_reading_in_day);

int main()
{
    welcomeMassageFun();

    int number_pages_Book = numberPageBookFun();
    int number_pages_Reading = numberPagesReadingFun();
    int average_reading_in_day = averageReadingInDayFun();
    bookReadingFun(number_pages_Book, number_pages_Reading, average_reading_in_day);

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Book Reading Program ( Version 5 ) ..\n\n");
}

// number page book function;
int numberPageBookFun()
{
    int number_pages_Book;
    printf("Please enter the number of pages of the book : ");
    scanf("%d", &number_pages_Book);
    return number_pages_Book;
}

// number pages Reading function;
int numberPagesReadingFun()
{
    int number_pages_Reading;
    printf("Please enter The number of pages read from the book : ");
    scanf("%d", &number_pages_Reading);
    return number_pages_Reading;
}

// average reading in day function;
int averageReadingInDayFun()
{
    int average_reading_in_day;
    printf("Please enter the average reading in day : ");
    scanf("%d", &average_reading_in_day);
    return average_reading_in_day;
}

// Book Reading function;
int bookReadingFun(int number_pages_Book, int number_pages_Reading, int average_reading_in_day)
{
    int result = (number_pages_Book - number_pages_Reading) / average_reading_in_day;

    printf("\nThe number of days required to read the entire book : %d Days\n\n\n", result);
}