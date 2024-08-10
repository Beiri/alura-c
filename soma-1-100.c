#include <stdio.h>

int main()
{
    int index = 1;
    int total = 0;

    while (index <= 100)
    {
        total += index;
        index++;
    }

    printf("%d\n", total);
}