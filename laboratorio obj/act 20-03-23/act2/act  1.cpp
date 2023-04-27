/*
pseudocodigo:

1. Declarar tres variables enteras numero1, numero2 y numero3.
2. Iniciar un bucle for con la variable numero1 inicializada en 1 y terminando en 85.
3. Dentro del bucle, asignar a la variable numero2 el valor de numero1 + 1 y a la variable numero3 el valor de numero2 + 1.
4. Verificar si la suma de numero1, numero2 y numero3 es igual a 87.
5. Si se cumple la condición anterior, imprimir la suma y los tres números correspondientes usando printf().
6. Salir del bucle con break.
7. Finalizar el programa.

*/


#include <stdio.h>

int numero1, numero2, numero3;

main() 

{
   
   
   for(numero1=1; numero1<=85; numero1++) 
   {
      numero2 = numero1 + 1;
      numero3 = numero2 + 1;
      
      if(numero1+numero2+numero3 == 87) 
	  {
         printf("%d + %d + %d = %d\n", numero1, numero2, numero3, numero1+numero2+numero3);
         break;
      }
   }
   

}
