#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("teste.txt", "r");

    if (f == 0)
    {
        printf("Arquivo não encontrado.\n");
        exit(1);
    }

    fclose(f);
}