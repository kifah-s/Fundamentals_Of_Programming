# Notes ..

<br>

1. Read 2 sentences function.
```c
// Get Sentences / Function.
void getSentencesFun(char sentences_1[100], char sentences_2[100])
{
    printf("Please enter two sentences, Sentences before \' / \', and sentences after \' / \': ");
    scanf("%[^/]", sentences_1);  // Read Sentences before  / .
    scanf("%*c");                 // Read / .
    scanf("%[^\n]", sentences_2); // Read Sentences after  / .
}
```
```c
// Get Sentences / Function.
void getSentencesFun(char sentences_1[100], char sentences_2[100])
{
    printf("Please enter two sentences, Sentences before \' / \', and sentences after \' / \': ");
    scanf("%[^/] %*c %[^\n]", sentences_1, sentences_2);
    // %[^/] : Read Sentences before  / .
    // %*c : Read / .
    // %[^/] : Read Sentences after  / .
}
```