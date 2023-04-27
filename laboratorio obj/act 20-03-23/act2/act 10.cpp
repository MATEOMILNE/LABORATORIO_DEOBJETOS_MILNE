#include <stdio.h>

int main() 
{
    int tiempo_segundos, horas, minutos, segundos;

    printf("Ingrese un tiempo en segundos: ");
    scanf("%d", &tiempo_segundos);

    horas = tiempo_segundos / 3600;        // 1 hora tiene 3600 segundos
    minutos = (tiempo_segundos % 3600) / 60;  // 1 minuto tiene 60 segundos
    segundos = tiempo_segundos % 60;       // sobrante de segundos

    printf("%d segundos equivale a %d horas, %d minutos y %d segundos\n", 
    tiempo_segundos, horas, minutos, segundos);
    
}
