#include <stdio.h>

int main(){

    int distancia_pecorrida;
    float combustivel_gasto;

    scanf("%d", &distancia_pecorrida);
    scanf("%f", &combustivel_gasto);

    float consumo_medio = distancia_pecorrida / combustivel_gasto;

    printf("%0.3f km/l\n", consumo_medio);

    return 0;


}