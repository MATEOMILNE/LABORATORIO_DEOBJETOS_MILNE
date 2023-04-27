#include<stdio.h>
int i, n=4, acont, cont,  totcomiciones, valor_venta, diesporciento, sueldo_base, acum;
main()
{
	printf("ingrese el sueldo base \n");
	scanf("%d",& sueldo_base);
	
	for(i=1;i<n;i++)
	{
		cont=cont+1;
		acont=acont+cont;
		printf("cuanto genero en la venta %d \n", acont);
		scanf("%d",& valor_venta);	
		diesporciento=valor_venta*0.10;
		acum=acum+diesporciento;	
	}
	
	totcomiciones=acum+sueldo_base;
	
	printf("el sueldo base es de %d \n", sueldo_base);
	
	printf("el total de las comiciones del 10 porciento es de %d \n", acum);
	
	printf("el sueldo total del trabajador con las comisiones seria de %d \n", totcomiciones);
	
	
	
	
	
}
