#include<stdio.h>
#include <string.h>
char mensaje[255];
int wifi, datos;
main()
{
	printf("ingrese el mensaje a enviar\n");
	fgets(mensaje, 255, stdin);
	
	printf("usted tiene señal wifi \n 1-si \n 2-no \n");
	scanf("%d",&wifi);
	
	printf("usted tiene datos 4G \n 1- si\n 2-no \n");
	scanf("%d",&datos);
	
	if(datos && wifi == 2)
	{
		printf("el mensage no se pudo enviar ya que no tiene ninguntipo de conexion internet \n");
	}
	
	if(datos==1 && wifi==2)
	{
		printf("el mensage se envio con exito ya que tiene conexion mediante datos \n");
	}
	
		if(datos==2 && wifi==1)
	{
		printf("el mensaje:\n \n %s \nse envio con exito ya que tiene conexion mediante wifi \n ",mensaje);
	}
	
	
}
