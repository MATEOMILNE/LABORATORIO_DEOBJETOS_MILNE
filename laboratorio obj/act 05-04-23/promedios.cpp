/*

Se desean determinar los promedios de los alumnos de un curso considerando un grupo.
Se ingresan los siguientes datos

Materia, Nro Legajo, Nota

Para una materia se puede ingresar más de un Nro de Legajo. Y para el mismo legajo más de una nota. Los datos se ingresan ordenados por Materia y Nro de Legajo
Se debe mostrar el promedio que le queda al legajo por materia. El legajo puede aparecer en más de una materia.
Se considera el final del ingreso de datos cuando la Materia = “XXX” y el Nro Legajo = 0

Se pide:
Realizar el corte por Materia y por Nro de Legajo


*/

 #include<stdio.h>
 #include<iostream>
 #include<stdlib.h>
 
 int legajo_estudiante[3], nota_materia[3][3], cont_materia,x,y,k,cont_desaprobados,promedio_1,promedio_2,promedio_3;;
 char nombre_materia[3][50];
 main()
 {
 	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for(x=0;x<3;x++)
 	{
 		printf("\n\n\ningrese el nombre de la materia:\n");
 		scanf("%s",& nombre_materia[y]);
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 	
 	
 		for(x=0;x<3;x++)
 		{
 			printf("\n\n\ningrese el legajo del estudiante:\n");
 			scanf("%d",& legajo_estudiante[y]);
		}
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
		for(y=0;y<3;y++)
		{
			
		printf("\n\n MATERIA: ---%s---\n\n",nombre_materia[y]);
		for(x=0;x<3;x++)		
			{
				printf("\n\n\ningrese la calificacion para el alumno con el numero legajo: %d\n",legajo_estudiante[x]);
				scanf("%d",& nota_materia[x][y]);
				if(nota_materia[x][y]<6)
				{
				cont_desaprobados=cont_desaprobados+1;
				}
			}
		}
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	printf("\n\n\nNOMBRE DE LA MATERIA			NUM.LEGAJO			NOTA\n\n\n");
	for(y=0;y<3;y++)
	{
		for(x=0;x<3;x++)
		{
	printf("\n\n\n%s					%d				%d\n\n\n",nombre_materia[y], legajo_estudiante[x], nota_materia[x][y]);
		}
	}
	
	
	
	promedio_1=(nota_materia[0][0]+nota_materia[0][1]+nota_materia[0][2])/3;
	printf("el promedio de la materia %s es de %d \n\n", nombre_materia[0],promedio_1);
	
	
	promedio_2=(nota_materia[1][0]+nota_materia[1][1]+nota_materia[1][2])/3;
	printf("el promedio de la materia %s es de %d \n\n", nombre_materia[1],promedio_2);
	
	
	promedio_3=(nota_materia[2][0]+nota_materia[2][1]+nota_materia[2][2])/3;
	printf("el promedio de la materia %s es de %d \n\n", nombre_materia[2],promedio_3);
	
	
	if(promedio_1>promedio_2&&promedio_1>promedio_3)
	{
		printf("la materia con mayor promedio es la materia %s \n", nombre_materia[0]);
	}
	
	if(promedio_2>promedio_1&&promedio_2>promedio_3)
	{
		printf("la materia con mayor promedio es la materia %s \n", nombre_materia[1]);
	}
	
	if(promedio_3>promedio_1&&promedio_3>promedio_2)
	{
		printf("la materia con mayor promedio es la materia %s \n", nombre_materia[2]);
	}
	
	printf("el total de desaprobados es de %d \n\n", cont_desaprobados);
	
 }
