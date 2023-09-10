

/* >>> Example 1 <<< */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *fun1(void *v)
{
    int i, *n = (int *)v;
    for (i = 0; i < *n; i++)
    {
        printf("Hello Gammal Tech%c", 10);
        sleep(1);
    }
    return NULL;
}
void *fun2(void *v)
{
    int i, *n = (int *)v;
    for (i = 0; i < *n; i++)
    {
        printf("Hi Gammal Tech%c", 10);
        sleep(1);
    }
    return NULL;
}
int main()
{
    int n = 5;
    pthread_t th;
    pthread_create(&th, NULL, fun1, &n);
    pthread_create(&th, NULL, fun2, &n);
    pthread_join(th, NULL);
    exit(0);
}
