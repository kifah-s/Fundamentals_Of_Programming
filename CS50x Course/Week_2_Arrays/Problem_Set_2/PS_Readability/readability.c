#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text;
    float index, L, S;
    int letters, words, sentences;

    text = get_string("Text : ");
    letters = count_letters(text);
    words =  count_words(text);
    sentences = count_sentences(text);

    printf("Letters : %d\n", letters);
    printf("Words : %d\n", words);
    printf("Sentences : %d\n", sentences);

    L = (float) letters/words * 100;
    S = (float) sentences/words * 100;
    printf("L is %f\n", L);
    printf("S is %f\n", S);
    index = 0.0588 * L - 0.296 * S - 15.8;

    printf("%f\n", index);

    if(index > 16)
        printf("Grade 16+\n");
    else if(index < 1)
        printf("Before Grade 1\n");
    else
        printf("Grade %d\n", (int)round(index) );


}

























































int count_letters(string text)
{
    int counter = 0, length;
    length = strlen(text);

    for(int i = 0; i < length; i++)
    {
        if(isalpha(text[i]))
        {
            counter++;
        }
    }
    return counter;
}





int count_words(string text)
{
    int counter = 0, length;
    length = strlen(text);

    for(int i = 0; i < length; i++)
    {
        if(text[i] == ' ')
        {
            counter++;
        }
    }
    counter++;
    return counter;
}





int count_sentences(string text)
{
    int counter = 0, length;
    length = strlen(text);

    for(int i = 0; i < length; i++)
    {
        if(text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            counter++;
        }
    }
    return counter;
}
































