#include <stdio.h>

int main() {
    int idade_em_dias;
    int ano;
    int mes;
    int dias;

    scanf("%d", &idade_em_dias);

    ano = idade_em_dias / 365;
    mes = (idade_em_dias % 365) / 30;
    dias = (idade_em_dias % 365) % 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);
    return 0;
}
