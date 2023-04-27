#include<stdio.h>
int genero, edad, peso, porciento1, fcmax;
main()
{
	printf("usted es: \n\n 1-hombre \n\n 2-mujer\n\n");
	scanf("%d",&genero);
	
	if(genero==1)
	{
		printf("ingrese su edad: \n");
		scanf("%d",&edad);
	
		printf("ingrese su peso: \n");
		scanf("%d",&peso);
		porciento1=peso*0.01;
		
	
	
		
		fcmax = ((210 - (0,5 * edad)) - porciento1) + 4;
		printf("el fcm suyo es %d", fcmax);
	}
	


	if(genero==2)
	{
		printf("ingrese su edad: \n");
		scanf("%d",&edad);
		
		printf("ingrese su peso: \n");
		scanf("%d",&peso);
		porciento1=peso*0.01;
		
		
	fcmax = (210 - (0,5 * edad))- porciento1;
		printf("el fcm suyo es %d", fcmax);
	}	
}
