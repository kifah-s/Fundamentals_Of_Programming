

/* >>> YouTube Views Program ( Version 5 ) <<< */

/* >>> YouTube Views Program : When we volunteer, we upload our explainer videos to YouTube or any other platform and then send the video link to Gammal Tech so that the volunteering hours will increase.
Required : Write a program that takes input from the user expressing the number of views a week ago and Another input expresses the current views and if the views increase it prints "views increased" if the views decreased its prints "views decreased" other than that it prints "same views". <<< */

#include <stdio.h>

void welcomeMassageFun();
int viewsBeforeFun();
int viewsNowFun();
int youtubeFun();

int main()
{
    welcomeMassageFun();

    youtubeFun();

    return 0;
}

// Functions..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in YouTube Views Program ( Version 5 ) ..\n\n");
}

// views before function;
int viewsBeforeFun()
{
    int views_b;
    printf("Please enter the views before week : ");
    scanf("%d", &views_b);
    return views_b;
}

// views now function;
int viewsNowFun()
{
    int views_n;
    printf("Please enter the views now : ");
    scanf("%d", &views_n);
    return views_n;
}

// YouTube function;
int youtubeFun()
{
    int views_b = viewsBeforeFun();
    int views_n = viewsNowFun();

    int difference;

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
}