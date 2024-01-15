

/* >>> Example 1 <<< */

#include <stdio.h>

char x1[] = "<html><head><title>";
char x2[] = "</title><link rel=\"stylesheet\" href=\"style.css\"/></head><body><table class=\"center\"><tr><td>";
char x3[] = "</td></tr></table></body></html>";

int main()
{
    FILE *out = fopen("index.html", "w");
    FILE *s = fopen("style.css", "w");

    char title[25], body[400], color[20];

    printf("\nEnter website title: ");
    scanf("%s", title);

    printf("Enter the body: ");
    scanf("\n%[^\n]", body);

    fprintf(out, "%s%s%s%s%s", x1, title, x2, body, x3);

    printf("Enter the Background color: ");
    scanf("%s", color);

    fprintf(s, "body {background-color:%s;} table.center {margin-left:auto; margin-right:auto;}", color);

    return 0;
}
