#include<stdio.h>
int valor[2][2], x, y;
main()
{
	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			printf("ingrese el valor: \n \n");
			scanf("%d",& valor[x][y]);
		}
	}
	
	printf("la matriz es |%d|		|%d|\n",valor[0][0],valor[1][0]);
	printf("             |%d|		|%d|\n",valor[0][1],valor[1][1]);
	
	
	printf("la matriz transpuesta seria:\n \n");
	printf("la matriz es |%d|		|%d|\n",valor[0][1],valor[0][0]);
	printf("             |%d|		|%d|\n",valor[1][0],valor[1][1]);
	
}

