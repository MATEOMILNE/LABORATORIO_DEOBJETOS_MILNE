#include<stdio.h>
int alumnos, total;
main()
{
printf("cuantos alumno viajan? \n");
scanf("%d",& alumnos);

if(alumnos>100)
{
	total=alumnos*500;
	printf("cada alumno debe pagar 500$ y se le deve pagar %d al la compania de viajes \n", total);
}

if(alumnos>=50 &&alumnos<=99)
{
	total=alumnos*400;
	printf("cada alumno debe pagar 400$ y se le deve pagar %d al la compania de viajes \n", total);
}

if(alumnos>=30 && alumnos<=49)
{
	total=alumnos*300;
	printf("cada alumno debe pagar 300$ y se le deve pagar %d al la compania de viajes \n", total);
}

if(alumnos<30)
{
	total=6000/alumnos;
	printf("cada alumno debe pagar %d y se le deve pagar 6000 al la compania de viajes ya que no superan los 30 alumnos \n", total);
}	
}

