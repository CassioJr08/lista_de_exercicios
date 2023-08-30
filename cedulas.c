#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade;

    printf("%d\n", valor);

    for (int i = 0; i < 7; i++) {
        quantidade = valor / notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
        valor = valor % notas[i];
    }

    return 0;
}