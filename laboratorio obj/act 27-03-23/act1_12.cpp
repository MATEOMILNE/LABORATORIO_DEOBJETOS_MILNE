#include<stdio.h>
int vector[2][2],x,y ,calculo1,calculo2; 
main()
{
	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			printf("ingrese el valor del vector \n");
			scanf("%d",& vector[x][y]);
		}
	}
	calculo1=(vector[0][0]/vector[0][1]);
	calculo2=(vector[1][0]/vector[1][1]);
	
	if(calculo1==calculo2)
	{
		printf("el calculo es proporcional ya que el primer calculo da: %d y el segundo da %d\n", calculo1, calculo2);
	}
	
	if(calculo1!=calculo2)
	{
		printf("el calculo no es proporcional ya que el primer calculo da: %d y el segundo da %d\n", calculo1, calculo2);
	}
}
