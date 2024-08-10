#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Primeiro número: ");
    scanf("%d", &x);
    printf("Segundo número: ");
    scanf("%d", &y);

    int total = x*y;

    printf("Total: %d\n", total);
}