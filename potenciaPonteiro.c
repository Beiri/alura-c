#include <stdio.h>

void potencia(int *resultado, int a, int b)
{
    (*resultado) = 1;

    for (int i = 0; i < b; i++)
    {
        (*resultado) = (*resultado) * a;
    }
}

int main()
{
    int a;
    int b;
    int resultado;

    scanf("%d", &a);
    scanf("%d", &b);

    potencia(&resultado, a, b);

    printf("O resultado é %d", resultado);
}