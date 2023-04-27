#include<stdio.h>
int vector[3][2],x,y ,productoescalar, i; 
main()
{
	for(y=0;y<2;y++)
	{
		for(x=0;x<3;x++)
		{
			printf("ingrese el valor del vector \n");
			scanf("%d",& vector[x][y]);
		}
	}
	productoescalar=(vector[0][0]*vector[0][1])+(vector[1][0]*vector[1][1])+(vector[2][0]*vector[2][1]);
	printf("el producto escalar de los dos vectores es de %d", productoescalar);
}
