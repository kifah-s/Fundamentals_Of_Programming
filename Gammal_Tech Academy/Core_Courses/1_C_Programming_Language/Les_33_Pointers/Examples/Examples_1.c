

#include <stdio.h>

void fun(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int x = 5, y = 20;
    fun(&x, &y);
    printf("\nx = %d , y = %d\n\n", x, y);
    return 0;
}