#include <stdio.h>

int main(){
    double A = 3.14159;
    double R;
    double resultado;

   
    scanf("%lf", &R);

    resultado = A * R * R;

    printf("A=%.4lf\n",resultado);

    return 0;
}