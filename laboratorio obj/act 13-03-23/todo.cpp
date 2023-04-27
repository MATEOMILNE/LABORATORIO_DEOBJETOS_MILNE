#include<stdio.h>
float auto1=70, auto2=150, velocidad, distancia, velocidad_tot, tiempo, punto_encuentro;
int alumnos, total, acont, cont,  totcomiciones, valor_venta, diesporciento, sueldo_base, acum, i, calif_total , promedio_parciales, empezar ;
int acum_notas, calificacion, promrdio_parciales, nota_final, porciento55, porciento30, porciento15, nota_trabajo, num1, num2,  n=4, actividad;
main()
{
	
	do
	{
		

	printf("que actividad desea visualizar \n 1-	act1 \n 2-	act2 \n 3-	act3 \n 4-	act4 \n 5-	act5 \n");
	scanf("%d",& actividad);
	
	switch (actividad) {
    case 1:
        
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

        break;
        
        
    
    case 2:
        
        	printf("ingrese el sueldo base \n");
	scanf("%d",& sueldo_base);
	
	for(i=1;i<n;i++)
	{
		printf("cuanto genero en la venta \n");
		scanf("%d",& valor_venta);	
		diesporciento=valor_venta*0.10;
		acum=acum+diesporciento;	
	}
	
	totcomiciones=acum+sueldo_base;
	
	printf("el sueldo base es de %d \n", sueldo_base);
	
	printf("el total de las comiciones del 10 porciento es de %d \n", acum);
	
	printf("el sueldo total del trabajador con las comisiones seria de %d \n", totcomiciones);
	
        break;
        
        
    
    case 3:
    	for(i=1;i<4;i++)
	{
		cont=cont+1;
		acont=acont+cont;
		printf("ingrese la calificacion de su parcial numero %d : \n", acont);
		scanf("%d",& calificacion);
		acum_notas=acum_notas+calificacion;
	}
	promedio_parciales=acum_notas/3;
	porciento55=promedio_parciales*0.55;
	
	
	printf("ingrese la calificacion de su examen final: \n");
	scanf("%d",& nota_final);
	porciento30=nota_final*0.30;
	
	
	printf("ingrese la calificacion de su trabajo: \n");
	scanf("%d",& nota_trabajo);
	porciento15=nota_trabajo*0.15;
	
	calif_total=porciento15+porciento30+porciento55;
	
	if(calif_total>=6)
	{
		printf("la materia esta aprobada con %d puntos \n", calif_total);
	}
	
	
	
	if(calif_total<6)
	{
		printf("la materia esta desaprobada con %d puntos \n", calif_total);
	}	
 
        break;
        
        
    case 4:
    	
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    printf("Los numeros pares entre %d y %d son:\n", num1, num2);
    
    for (i = num1; i <= num2; i++) 
	{
        if (i % 2 == 0) 
		{
            printf("%d\n", i);
        }
    }
     
        break;
        
        
    
    case 5:
    	
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
    	
     
        break;
    
    default:
       
        break;
        
        
}// swtich

	printf("\n desea visualizar otra actividad \n 1-	si\n 2-	no \n");
	scanf("%d",& empezar);
	

	}while(empezar==1);					//do
	
	
} //main
