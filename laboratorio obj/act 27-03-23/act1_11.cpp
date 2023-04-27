#include<stdio.h>
int vector[3][3][2],x,y,z ,productovectorial, i; 
main()
{
	for(z=0;z<2;z++)
	{
		for(y=0;y<3;y++)
		{
			for(x=0;x<3;x++)
			{
			printf("ingrese el valor del vector \n");
			scanf("%d",& vector[x][y][z]);
			}
		}	
	}
	
	productovectorial=vector[0][0][0]+vector[1][1][0]+vector[2][2][0]+vector[0][0][1]+vector[1][1][1]+vector[2][2][1];
	
	printf("el producto vectorial de los vectores es de %d", productovectorial);
}
