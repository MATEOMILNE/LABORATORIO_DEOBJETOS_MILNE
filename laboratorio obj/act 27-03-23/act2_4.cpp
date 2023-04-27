#include <stdio.h>
int i, j;
float matriz[3][3], det, inv[3][3];
 main()
{
    printf("Ingrese los datos de la matriz 3x3:\n");

    // Solicitar datos de la matriz al usuario
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Ingrese el elemento (%d,%d): ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Calcular el determinante de la matriz
    det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[2][1] * matriz[1][2])
        - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[2][0] * matriz[1][2])
        + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[2][0] * matriz[1][1]);

    // Comprobar que el determinante es diferente de cero
    if(det==0)
    {
        printf("La matriz no tiene inversa\n");
        return 0;
    }

    // Calcular la matriz inversa
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            inv[i][j] = ((matriz[(j+1)%3][(i+1)%3] * matriz[(j+2)%3][(i+2)%3])-(matriz[(j+1)%3][(i+2)%3]*matriz[(j+2)%3][(i+1)%3]))/det;
        }
    }

    // Mostrar la matriz inversa
    printf("\nLa matriz inversa es:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f\t", inv[i][j]);
        }
        printf("\n");
    }

}

