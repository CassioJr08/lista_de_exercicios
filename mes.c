#include <stdio.h>

int main() {
    int mes_numero;
    char *meses[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    scanf("%d", &mes_numero);

    if (mes_numero >= 1 && mes_numero <= 12) {
        printf("%s\n", meses[mes_numero - 1]);
    }

    return 0;
}