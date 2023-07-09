

/* >>> Problem Solving ( Version 3 ) <<< */

/* >>> Problem statement

Sherif is a student at Gammal Tech. Indeed, every time he finishes a lesson on the website, he takes a few hours to do the exercise below the video.

He wanted to increase his rank on the website, so he started making videos to solve the problems, and posting them on his social media accounts. He sent them to Gammal Tech Technical Support in order to get his volunteering points.

The scoring criteria is the following:

- The low quality video gives Sherif 1 point.

- The good quality video gives Sherif 3 points.

You need to calculate the number of Sherif's volunteering points.

Input

The first line of the input contains one integer L low quality video (L ≥ 0 )

The second line of the input contains one integer H High quality video (H ≥ 0 )

Output

the total volunteering points <<< */

#include <stdio.h>

void welcomeMassageFun();
int hightQualityFun();
int lowQualityFun();
int problemSolvingFun(int low, int hight);

int main()
{
    welcomeMassageFun();

    int hight = hightQualityFun();
    int low = lowQualityFun();
    problemSolvingFun(hight, low);
    
    return 0;
}

// Function..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Problem Solving for scanf Lesson ( Version 3 ) ..\n\n");
}

// Hight quality function;
int hightQualityFun()
{
    int hight;
    printf("Number video for High Quality : ");
    scanf("%d", &hight);
    return hight;
}

// Low quality function;
int lowQualityFun()
{
    int low;
    printf("Number video for Low Quality : ");
    scanf("%d", &low);
    return low;
}

// Problem Solving function;
int problemSolvingFun(int low, int hight)
{
    int result;
    result = (low * 1) + (hight * 3);
    printf("\nTotal points : %d\n\n\n", result);
}