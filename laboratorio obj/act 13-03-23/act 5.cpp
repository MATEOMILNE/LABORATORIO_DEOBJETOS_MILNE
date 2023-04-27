#include<stdio.h>
float auto1=70, auto2=150, velocidad, distancia, velocidad_tot, tiempo, punto_encuentro;
main()
{
	printf("ingrese la velocidad a la que iran los veiculos \n");
	scanf("%f",& velocidad);
	
	//distancia
	distancia=auto2-auto1;
	
	//velocidad
	velocidad_tot=velocidad*2;
	
	//tiempo
	tiempo=distancia/velocidad_tot;
	
	//punto de encuentro
	punto_encuentro=auto1+velocidad*tiempo;
	
	//resultado
	printf("los autos se encontraran en el km %0.0f \n", punto_encuentro);
	
}
