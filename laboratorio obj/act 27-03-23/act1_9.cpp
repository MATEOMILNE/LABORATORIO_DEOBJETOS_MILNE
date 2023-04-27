#include <stdio.h>
float x1, y1, x2, y2, dif_x, dif_y;
main() 
{
    // Pedimos al usuario que introduzca los datos del primer vector
    printf("Introduce las cordenadas del primer vector:\n");
    printf("Cordenada x: ");
    scanf("%f", &x1);
    printf("Cordenada y: ");
    scanf("%f", &y1);

    // Pedimos al usuario que introduzca los datos del segundo vector
    printf("\nIntroduce las cordenadas del segundo vector:\n");
    printf("Cordenada x: ");
    scanf("%f", &x2);
    printf("Cordenada y: ");
    scanf("%f", &y2);

    // Calculamos la diferencia entre los vectores
    dif_x = x2 - x1;
    dif_y = y2 - y1;

    // Mostramos el resultado de la diferencia
    printf("                                         x     y");
    printf("\nLa diferencia entre los vectores es: (%.2f, %.2f)\n", dif_x, dif_y);
}

