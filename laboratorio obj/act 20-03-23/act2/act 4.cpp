#include<stdio.h>
int cont, nota_examen, acum, tp_final, promedio, i, n=3, suma;
main()
{
	for(i=0;i<n;i++)
	{
		cont=cont+1;
		printf("ingrese la nota del examen %d\n", cont);
		scanf("%d",& nota_examen);
		acum=acum+nota_examen;
	}
	printf("ingrese la nota del trabajo final\n");
	scanf("%d",& tp_final);
	
	suma=acum+tp_final;
	promedio=suma/4;
	
	if(promedio>=6)
	{
		printf("la materia esta aprobada con %d \n",promedio);
	}
	
	
	if(promedio<6)
	{
		printf("la materia esta desaprobada con %d\n", promedio);
	}
	
}
