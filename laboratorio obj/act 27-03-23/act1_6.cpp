#include<stdio.h>
int numero[10], i;
main()
{
	for(i=0;i<10;i++)
	{
		printf("ingrese un numero");
		scanf("%d",& numero[i]);
	}
	
	 for(i=10-1;i>=0;i--) 
	 {
        printf("%d \n", numero[i]);
    }
}
