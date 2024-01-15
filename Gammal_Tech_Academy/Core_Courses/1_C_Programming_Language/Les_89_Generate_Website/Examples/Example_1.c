

/* >>> Example 1 <<< */

#include <stdio.h>
#include <stdlib.h>

char x1[] = "<html><head><title>";
char x2[] = "</title><link rel=\"stylesheet\"href=\"style.css\"/></head><body><table class=\"center\" width=\"90%%\"><tr><td>";
char x3[] = "</td></tr><tr><td id=\"w\">";
char x4[] = "<br></td></tr></table><table class=\"center\" width=\"90%%\"><tr><td>";
char x5[] = "</td><td>";
char x6[] = "</td></tr><tr><td>";
char x7[] = "</td><td>";
char x8[] = "</td></tr></table><footer><a href=\"https://www.gammal.tech/\">gammal tech</a> all reserve</footer></body></html>";

int main()
{
    FILE *f = fopen("index.html", "w");
    FILE *css = fopen("style.css", "w");

    char title[20], header[100], img[400], color[20];
    char v1[400], v2[400], v3[400], v4[400];

    printf("Enter title: ");
    scanf("%s", title);

    printf("Enter header: ");
    scanf("\n%[^\n]", header);

    printf("Enter img: ");
    scanf("\n%[^\n]", img);

    printf("Enter video1: ");
    scanf("\n%[^\n]", v1);

    printf("Enter video2: ");
    scanf("\n%[^\n]", v2);

    printf("Enter video3: ");
    scanf("\n%[^\n]", v3);

    printf("Enter video4: ");
    scanf("\n%[^\n]", v4);

    printf("Enter color: ");
    scanf("%s", color);

    fprintf(f, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s%s", x1, title, x2, header, x3, img, x4, v1, x5, v2, x6, v3, x7, v4, x8);
    fprintf(css, "body{background-color:%s;}table.center{margin-left:auto;margin-right:auto;text-align:center;}table -td#w{background-color:white;color:black;}footer{text-align:center;}img{width:100%%;height:auto;}iframe{width:100%%;}footer{color:white;}a{color:white;}", color);

    return 0;
}
