#include <stdio.h>

void potencia(int a, int b)
{
    int resultado = 1;
    for (int i = 0; i < b; i++)
    {
        resultado = resultado * a;
    }

    printf("O resultado é %d", resultado);
}

int main()
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    potencia(a, b);
}