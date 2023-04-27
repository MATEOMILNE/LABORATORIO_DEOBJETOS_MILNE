#include<stdio.h>
int pesos, dolares, pasage;
main()
{
	 printf("ingrese su cantidad de pesos que quiera pasar a dolares: \n \n");
	 scanf("%d",& pesos);
	 
	 
	 printf("a cuanto esta el dolar: \n \n");
	 scanf("%d",& dolares);
	 
	 //pasage de pesos a dolares
	 pasage=pesos/dolares;
	 
	 printf("lo que usted resivira en dolares es un total de %d de %d pesos \n",pasage, pesos);
}
