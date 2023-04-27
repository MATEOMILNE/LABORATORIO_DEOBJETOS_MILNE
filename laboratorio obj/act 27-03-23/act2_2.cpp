#include<stdio.h>
int valor[3][3], x, y,determinante,diagonalp,diagonalop;
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
	
	diagonalp=valor[0][0]+valor[1][1]+valor[2][2];
	diagonalop=valor[0][2]+valor[1][1]+valor[2][0];
	determinante=diagonalp-diagonalop;
	
	printf("la determinate es de %d \n", determinante);
	
	}
