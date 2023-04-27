#include<stdio.h>
int hombres, mujeres, porcentaje_h, porcentaje_m, suma;
main()
{
	printf("cuantos hombres hay en su clase: \n");
	scanf("%d",& hombres);
	
	printf("cuantos mujeres hay en su clase: \n");
	scanf("%d",& mujeres);
	
	
	suma=hombres+mujeres;
	
	porcentaje_h=hombres*100/suma;
	
	porcentaje_m=mujeres*100/suma;
	
	
	printf("el porcentaje de los hobres es de %d \n \n y de las mujeres %d \n", porcentaje_h, porcentaje_m);
}
