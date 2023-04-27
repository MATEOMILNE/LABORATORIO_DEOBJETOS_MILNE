/*
pseudocodigo 

1. Declarar las variables enteras num, promedio, i, n y acum.
2. Inicializar la variable n con el valor 3.
3. Inicializar la variable acum con el valor 0.
4. Iniciar un bucle for que se repita n veces, empezando desde 0 y aumentando en 1 en cada iteración.
5. Imprimir "Ingrese un número: " para solicitar al usuario que ingrese un número.
6. Leer el número ingresado por el usuario con scanf() y almacenarlo en la variable num.
7. Sumar el valor de num a la variable acum.
8. Finalizar el bucle for.
9. Calcular el promedio dividiendo el valor de acum por n.
10. Imprimir "El promedio de los tres números es de " seguido del valor de la variable promedio.
11. Finalizar el programa

*/


#include<stdio.h>
int num promedio,i, n=3, acum;
main()
{
	for(i=0;i<n;i++)
	{
	printf("ingrese un numero: \n");
	scanf("%d",&num);
	acum=acum+num	;
	}

	promedio=acum/3;
	printf("el promedio de los tres numero es de %d", promedio);
}
