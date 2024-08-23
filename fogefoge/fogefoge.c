#include <stdio.h>
#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;

int acabou()
{
    return 0;
}

int ehdirecao(char direcao)
{
    return direcao == 'a' || direcao == 'w' || direcao == 's' || direcao == 'd';
}

void move(char direcao)
{
    if (!ehdirecao(direcao))
        return;

    int proximox = heroi.x;
    int proximoy = heroi.y;

    switch (direcao)
    {
    case DIREITA:
        proximoy++;
        break;
    case ESQUERDA:
        proximoy--;
        break;
    case BAIXO:
        proximox++;
        break;
    case CIMA:
        proximox--;
        break;
    }

    if (!ehvalida(&m, proximox, proximoy))
        return;

    if (!ehvazia(&m, proximox, proximoy))
        return;

    andanomapa(&m, heroi.x, heroi.y, proximox, proximoy);

    heroi.x = proximox;
    heroi.y = proximoy;
}

int main()
{
    lemapa(&m);
    encontramapa(&m, &heroi, HEROI);

    do
    {
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);
        move(comando);
    } while (!acabou());

    liberamapa(&m);
}