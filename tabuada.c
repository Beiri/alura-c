#include <stdio.h>

int main()
{
    int numero;

    printf("Número ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++)
    {
        int total = numero * i;
        printf("%dx%d=%d\n", numero, i, total);
    }
}