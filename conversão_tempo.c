#include <stdio.h>

int main() {
    int total_segundos;
    int horas;
    int minutos;
    int segundos;

    
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    minutos = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

   
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
