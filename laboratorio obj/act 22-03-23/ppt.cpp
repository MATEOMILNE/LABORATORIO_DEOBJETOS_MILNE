#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int ronda, vuelta, opcion, maquina, p_jugador=0, p_maquina=0;
main()
{
	printf("bienvenido al piedra papel o tijera de milne \n \n hoy te estaras enfrentando a la maquina \n\n buena suerte\n\n");
	
	
	srand(time(NULL)); // Inicializar generador de números aleatorios
	
	for(ronda=1;ronda<=5;ronda++)
	{
		printf("ronda %d \n \n",ronda);
		
		for(vuelta=1;vuelta<=3;vuelta++)
		{
			printf("1- piedra\n \n 2- papel \n\n 3- tijera \n\n");
			scanf("%d",& opcion);	
			
			maquina = rand() % 3 + 1; // Generar número aleatorio entre 1 y 3
			
			if(maquina==1)
			{
				printf("la maquina eligio piedra\n\n");
			}
			
			if(maquina==2)
			{
				printf("la maquina eligio papel\n\n");
			}
				
			if(maquina==3)
			{
				printf("la maquina eligio tijera\n\n");
			}	
	
			if(opcion==maquina)
			{
				printf(" la vuelta fue empatada \n \n");
			}
			
			if(opcion==1 && maquina==3 || opcion==2 && maquina==1 ||opcion==3 && maquina==2)
			{
			printf("ganaste la vuelta \n \n");
			p_jugador++;
			}
			
			else
			{
			printf("perdiste la vuelta\n \n");
			p_maquina++;	
			}
	
		}
	
	}
	
	if(p_jugador>p_maquina)
	{
		printf("felicitaciones ganaste el campeonato con %d puntos y la maquina lo perdio con %d puntos \n", p_jugador, p_maquina);
	}
	
	if(p_jugador<p_maquina)
	{
		printf("perdiste el campeonato con %d puntos y la maquina lo gano con un total de %d puntos \n", p_jugador, p_maquina);
	}
	
	if(p_jugador==p_maquina)
	{
		printf("el campeonato quedo en empate \n");
	}
	
}
