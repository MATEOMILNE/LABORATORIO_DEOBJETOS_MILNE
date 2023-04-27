#include<stdio.h>
float nota, sumatot, ciento15, ciento30, ciento55, acum, promedio, tp_final;
int cont, i , n=3;
main()
{
	for(i=0;i<n;i++)
	{
		cont=cont+1;
		printf("ingrese la nota del examen %d \n",cont);
		scanf("%f",& nota);
		acum=acum+nota;
	}
	
	printf("ingrese la nota del tp final\n");
	scanf("%f",& tp_final);
	
	promedio=acum/3;
	
	//55%
	ciento55=promedio*0.55;
	
	//30%
	ciento30=promedio*0.30;
	
	//15%
	ciento15=tp_final*0.15;
	
	sumatot=ciento15+ciento30+ciento55;
	
	if(sumatot>=6)
	{
		printf("la materia esta aprobada con %0.2f puntos \n", sumatot);
	}
	
	
	if(sumatot<6)
	{
		printf("la materia esta desaprobada con %0.2f puntos \n", sumatot);
	}
	
}
