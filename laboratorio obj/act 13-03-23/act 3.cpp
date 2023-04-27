#include<stdio.h>
int i,cont, calif_total ,acont, promedio_parciales ,acum_notas, calificacion, promrdio_parciales, nota_final, porciento55, porciento30, porciento15, nota_trabajo;
main()
{
	for(i=1;i<4;i++)
	{
		cont=cont+1;
		acont=acont+cont;
		printf("ingrese la calificacion de su parcial numero %d : \n", acont);
		scanf("%d",& calificacion);
		acum_notas=acum_notas+calificacion;
	}
	promedio_parciales=acum_notas/3;
	porciento55=promedio_parciales*0.55;
	
	
	printf("ingrese la calificacion de su examen final: \n");
	scanf("%d",& nota_final);
	porciento30=nota_final*0.30;
	
	
	printf("ingrese la calificacion de su trabajo: \n");
	scanf("%d",& nota_trabajo);
	porciento15=nota_trabajo*0.15;
	
	calif_total=porciento15+porciento30+porciento55;
	
	if(calif_total>=6)
	{
		printf("la materia esta aprobada con %d puntos \n", calif_total);
	}
	
	
	
	if(calif_total<6)
	{
		printf("la materia esta desaprobada con %d puntos \n", calif_total);
	}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
