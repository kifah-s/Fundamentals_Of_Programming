

/* >>> Example 1 <<< */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *g = fopen("gammal.txt", "r");
    FILE *g2 = fopen("gammal2.txt", "w");
    char correct_word[20], wrong_word[20], w[20], c[20];
    printf("Enter the wrong word: ");
    scanf("%s", wrong_word);
    printf("Enter the correct word: ");
    scanf("%s", correct_word);
    while (fscanf(g, "%s", w) != EOF)
        if (strcmp(w, wrong_word) == 0)
            fprintf(g2, "%s ", correct_word);
        else
            fprintf(g2, "%s ", w);
    fclose(g);
    fclose(g2);
    g = fopen("gammal.txt", "w");
    g2 = fopen("gammal2.txt", "r");
    while (fscanf(g2, "%s", c) != EOF)
        fprintf(g, "%s ", c);
    fclose(g);
    fclose(g2);
    remove("gammal2.txt");
    return 0;
}
