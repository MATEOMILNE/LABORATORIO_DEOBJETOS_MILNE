#include<stdio.h>
float numero[10], max, numero_max;
int i=0;
main()
{
	for(i=0;i<10;i++)
	{
		printf("ingrese un numero \n");
		scanf("%f",& numero[i]);
		
		if(i==0||numero[i]>max)
	   {
	   	max=numero[i];	
	   }
		
	}
		printf("el numero mayor entre los cargados es %0.0f \n",max);	
}
