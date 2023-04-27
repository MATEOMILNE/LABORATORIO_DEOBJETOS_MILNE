#include<stdio.h>
#include<locale.h>
int dia, mes, dia_p;
main()
{
	printf("igrese el dia \n");
	scanf("%d",& dia);
	printf("igrese el mes \n");
	scanf("%d",& mes);
	
	if(mes==1)
	{
		setlocale(LC_ALL,"");
		printf("el dia del año es: %d \n", dia);
	}
	
	if(mes==2)
	{
		dia_p=31+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==3)
	{
		dia_p=31+28+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==4)
	{
		dia_p=(31*2)+28+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==5)
	{
		dia_p=(31*2)+28+30+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==6)
	{
		dia_p=(31*3)+28+30+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==7)
	{
		dia_p=(31*3)+28+(30*2)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==8)
	{
		dia_p=(31*4)+28+(30*2)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==9)
	{
		dia_p=(31*5)+28+(30*2)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==10)
	{
		dia_p=(31*5)+28+(30*3)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==11)
	{
		dia_p=(31*6)+28+(30*3)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
	
	if(mes==12)
	{
		dia_p=(31*6)+28+(30*4)+dia;
		setlocale(LC_ALL,"");
		printf("el dia %d del mes %d es el dia %d del año \n",dia, mes, dia_p);
	}
}
