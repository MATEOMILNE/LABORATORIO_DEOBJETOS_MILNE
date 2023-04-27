#include<stdio.h>
float numero[4], promedio, acum, media, aux;
int i, j;
main()
{
	for(i=0;i<4;i++)
	{
	printf("ingrese un numero");
	scanf("%f",& numero[i]);
	acum=acum+numero[i];
	}
	
for(j=1; j<4; j++)
{
	for(i=0; i<4-j; i++)
	{
		if(numero[i]>numero[i+1])
		{aux=numero[i];
		numero[i]=numero[i+1];
		numero[i+1]=aux;
		}
	}	

}

	//imprimo menor a mayor
	
	for(i=0;i<4;i++)
	{
		printf("||%0.0f|| \n", numero[i]);
	}
	media=(numero[1]+numero[2])/2;
	promedio=acum/4;
	
printf("la media es %0.2f \n", media);
printf("el promedio es de %0.2f \n", promedio);
}



