void soma(int numeros[10])
{
    int total;

    for (int i = 0; i < 10; i++)
    {
        total += numeros[i];
    }

    printf("%d", total);
}