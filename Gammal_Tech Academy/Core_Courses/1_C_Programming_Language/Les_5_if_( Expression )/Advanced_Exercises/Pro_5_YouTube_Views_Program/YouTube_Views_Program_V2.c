

/* >>> YouTube Views Program ( Version 2 ) <<< */

/* >>> YouTube Views Program : When we volunteer, we upload our explainer videos to YouTube or any other platform and then send the video link to Gammal Tech so that the volunteering hours will increase.
Required : Write a program that takes input from the user expressing the number of views a week ago and Another input expresses the current views and if the views increase it prints "views increased" if the views decreased its prints "views decreased" other than that it prints "same views". <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in YouTube Views Program ( Version 2 ) ..\n\n");

    int views_b, views_n, difference;

    printf("Please enter the views before week : ");
    scanf("%d", &views_b);

    printf("Please enter the views now : ");
    scanf("%d", &views_n);

    if (views_n > views_b)
    {
        difference = views_n - views_b;

        printf("\nDifference = + %d , Views = %d , Views increased\n\n\n", difference, views_n);
    }
    else if (views_n < views_b)
    {
        difference = views_n - views_b;
        printf("\nDifference = %d , Views = %d , Views decreased\n\n\n", difference, views_n);
    }
    else
    {
        difference = views_n - views_b;
        printf("\nDifference = %d , Views = %d , Some views\n\n\n", difference, views_n);
    }

    return 0;
}