/*

pseudocodigo

1. Declarar la variable entera num.
2. Imprimir "Ingresa un número: " para solicitar al usuario que ingrese un número.
3. Leer el número ingresado por el usuario con scanf() y almacenarlo en la variable num.
4. Evaluar si el número es mayor que cero.
5. Si el número es mayor que cero, imprimir que es un número positivo.
6. Imprimir que el número es mayor que cero.
7. Evaluar si el número es par o impar.
8. Si el número es par, imprimir que es par.
9. Si el número es impar, imprimir que es impar.
10. Evaluar si el número es igual a cero.
11. Si el número es igual a cero, imprimir un mensaje correspondiente.
12. Si el número es menor que cero, imprimir que es un número negativo.
13. Evaluar si el número es par o impar.
14. Si el número es par, imprimir que es par.
15. Si el número es impar, imprimir que es impar.
16. Imprimir que el número es menor que cero.
17. Finalizar .
*/


#include <stdio.h>

int num; 

main() 
{
   
   printf("Ingresa un numero: ");
   scanf("%d", &num);
   
   if(num > 0) 
   {
      printf("%d es un numero positivo.\n", num);
      
      printf("%d es un numero es mayor que cero\n",num);
      
      if(num % 2 == 0) 
	  {
         printf("%d es un numero par.\n", num);
      } 
	  else {
         printf("%d es un numero impar.\n", num);
      }
      
   } else 
   
   if(num == 0) 
   {
      printf("El número es cero.\n");
      
   } else
   
    {
      printf("%d es un numero negativo.\n", num);
      
      if(num % 2 == 0) 
	  {
         printf("%d es un numero par.\n", num);
      } 
	  else {
         printf("%d es un numero impar.\n", num);
         printf("%d es un numero menor que cero",num);
      }
      
    
   }
   

}
