

/* >>> Example 1 <<< */
#include <iostream>
#include <stdio.h>

using namespace std;

void recurse()
{
    recurse();
}

int main()
{
    recurse();

    return 0;
}