#include<stdio.h>
int nota;
main()
{
	printf("ingrese su calificacion \n");
	scanf("%d",&nota);
	
	if(nota>=8)
	{
	printf("felicitaciones aprovaste \n");
	}
	
	if(nota<8)
	{
		printf("deves esforsarte mas \n");
	}
	
}
