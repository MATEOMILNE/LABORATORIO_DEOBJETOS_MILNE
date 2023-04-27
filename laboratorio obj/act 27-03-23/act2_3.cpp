#include<stdio.h>
int valor[3][3], x, y, calculo;
main()
{
	for(y=0;y<3;y++)
	{
		for(x=0;x<3;x++)
		{
			printf("ingrese el valor: \n \n");
			scanf("%d",& valor[x][y]);
		}
	}
	
	printf("la matriz es |%d|		|%d|		|%d|\n",valor[0][0],valor[1][0],valor[2][0]);
	printf("la matriz es |%d|		|%d|		|%d|\n",valor[0][1],valor[1][1],valor[2][1]);
	printf("la matriz es |%d|		|%d|		|%d|\n",valor[0][2],valor[1][2],valor[2][2]);
	
	printf("para calcular la matriz adjunta debemo de saber lo siguiente \n\n");
	
	printf(" |+|		|-|			|+|\n");
	printf(" |-|		|+|			|-|\n");
	printf(" |+|		|-|			|+|\n");
	
	printf("nosotros eliminaremos la primera fila x y la primera columna y\n cosa que nos quedaria asi:\n\n");
	
	printf(" 		|+|			|-|\n");
	printf(" 		|-|			|+|\n");
	
	printf("lo cual la matriz nos quedaria:\n\n");
	printf(" 		|%d|			|%d|\n",valor[1][1],valor[2][1]);
	printf(" 		|%d|			|%d|\n",valor[1][2],valor[2][2]);
	
	printf("ahora multiplicamos el valor 1.1 con el valor 2.2 menos valor 1.2 x 2.1 y y el resultado es: \n\n");
	calculo=(valor[1][1]*valor[2][2])-(valor[2][1]*valor[1][2]);
	printf("%d\n", calculo);
	
}
