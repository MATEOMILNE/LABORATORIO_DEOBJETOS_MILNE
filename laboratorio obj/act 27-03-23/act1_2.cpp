#include<stdio.h>
int num[5] ,i;
main()
{
	for(i=0;i<5;i++)
	{
			printf("ingrese un numero\n");
			scanf("%d",& num[i]);
	}

	for(i=5;i>0;i--)
	{
			printf("\n %d \n", num[i-1]);
	}


}
