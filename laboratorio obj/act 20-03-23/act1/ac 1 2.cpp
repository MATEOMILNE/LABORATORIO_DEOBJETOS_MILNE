#include<stdio.h>
int empleados, cont, nota1, nota2, i;
main()
{
	printf("cuantos empleados tiene que capasitar\n");
	scanf("%d",& empleados);
	
	for(i=0;i<empleados;i++)
	{
		cont=cont+1;
		printf("ingrese la calificacion del primer examen del empleado %d \n", cont);
		scanf("%d",&nota1);
		
		printf("ingrese la calificacion del segundo examen del empleado %d\n", cont);	
		scanf("%d",&nota2);
		
		if(nota1>=7 && nota2>=8)
		{
			printf("el empleado es apto\n");
		}
		
		
		if(nota1<7 && nota2>=8)
		{
			printf("el empleado no es apto\n");
		}
		
		
		if(nota1>=7 && nota2<8)
		{
			printf("el empleado no es apto\n");
		}
		
		if(nota1<7 && nota2<8)
		{
			printf("el empleado no es apto\n");
		}
		
		
	}	
	
}
