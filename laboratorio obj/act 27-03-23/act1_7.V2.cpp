#include<stdio.h>
int i;
float media,numero[10];
main()
{
	for(i=0;i<10;i++)
	{
		printf("ingrese un numero \n");
		scanf("%f",& numero[i]);
	}
	media=(numero[4]+numero[5])/2;
printf("la media es %0.2f \n\n", media);


for(i=0;i<10;i++)
	{
		if(numero[i]>media)
		{	
		printf("%0.0f \n\n",numero[i]);
		}
	}
	
}
