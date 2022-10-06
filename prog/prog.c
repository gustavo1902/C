#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = 0;
    //x = x + 1;
    x += 1;

    while (x < 10)
    {
        printf("msg\n");
        x += 1;
    }
    return 0;
}
