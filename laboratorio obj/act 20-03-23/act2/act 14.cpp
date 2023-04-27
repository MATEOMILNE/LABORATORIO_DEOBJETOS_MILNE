#include<stdio.h>
int numero, absoluto;
main()
{
	printf("ingrese un numero: \n");
	scanf("%d",& numero);
	
	
	if(numero<0)
	{
		absoluto=numero+(numero*(-2));
		
		printf("el numero absoluto de %d es %d \n", numero, absoluto);
	}
	
	if(numero>=0)
	{
		printf("el numero no es negativo entonces no va a tener cambios");
	}
	
}
