 #include<stdio.h>
 #include<iostream>
 #include<stdlib.h>
float porcenmenores,porcentajec;
int max,max_x,max_y,apa,contc,puntage[3][3],edad[3][3],x,y,cont_menor,tiros,otra,k;
char nombre[3][3][50], posicion[3][3][9],c,m,b,f;
main()
{
	system("color f0");
	
		for(y=0;y<3;y++)
		{
			for(x=0;x<3;x++)
			{
				printf("\n\n\n ingrese el nombre de el / la participante:\n");
				scanf("%s",& nombre[x][y][k]);
				
				printf("\n\n\n ingrese la edad de el / la participante:\n");
				scanf("%d",& edad[x][y]);
				
				if(edad[x][y]<18)
				{
					cont_menor=cont_menor+1;
				}
			}
		}
		
	do 
			{
				apa=apa+9;
		
		for(y=0;y<3;y++)
		{
			for(x=0;x<3;x++)
			{
				
				printf("\n\n\n ingrese la posicion del blanco que alcanzo %s:\n\n\n		C (100)---> Centro\n		M (50)---> Medio\n		B (10)---> Blanco\n		F (-10)---> Fallo\n\n\n",nombre[x][y]);
				scanf("%s",&posicion[x][y][k]);
				
				switch(posicion[x][y][k])
				{
					case 'c':
						puntage[x][y]=puntage[x][y]+100;
						contc=contc+1;
						break;
						
						case 'm':
						puntage[x][y]=puntage[x][y]+50;
						break;
						
						case 'b':
						puntage[x][y]=puntage[x][y]+10;
						break;
						
						case 'f':
						puntage[x][y]=puntage[x][y]-10;
						break;
						
						default:
						break;
				}//switch
	
			} //for x
		}//for y
		////  MUESTRO PUNTAGE DE CADA PJ
		for(y=0;y<3;y++)
		{
			for(x=0;x<3;x++)
			{  
				printf("		el puntaje de %s fue de %d\n		--------------------------\n\n",nombre[x][y],puntage[x][y]);
			}
		}
		
			printf("		desea de realiza otra ronda de tiros: \n\n		1-si\n		2-no\n\n\n");
			scanf("%d",&otra);
			} while(otra!=2);
			
			porcenmenores=cont_menor*100/9;
			printf("		el porcentaje de los menores de edad es de %0.2f porciento\n\n\n",porcenmenores);
			
			porcentajec=contc*100/apa;
			printf("		el porcentaje de tiros a c es un total de %0.2f porciento \n\n\n",porcentajec);
		
		
			for(y=0;y<3;y++)
			{
				for(x=0;x<3;x++)
				{
					if((x==0 && y==0)||puntage[x][y]>max)
					{
					max=puntage[x][y];
					max_x=x;
					max_y=y;
					}
				}	
			}
																			                                                          
			printf("		el mayor puntaje fue %d y el jugador que lo hizo fue %s", max, nombre[max_x][max_y]);
}
