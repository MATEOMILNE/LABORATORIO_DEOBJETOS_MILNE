/*

pseudocodigo

1. Declarar la variable entera num.
2. Imprimir "Ingresa un n�mero: " para solicitar al usuario que ingrese un n�mero.
3. Leer el n�mero ingresado por el usuario con scanf() y almacenarlo en la variable num.
4. Evaluar si el n�mero es mayor que cero.
5. Si el n�mero es mayor que cero, imprimir que es un n�mero positivo.
6. Imprimir que el n�mero es mayor que cero.
7. Evaluar si el n�mero es par o impar.
8. Si el n�mero es par, imprimir que es par.
9. Si el n�mero es impar, imprimir que es impar.
10. Evaluar si el n�mero es igual a cero.
11. Si el n�mero es igual a cero, imprimir un mensaje correspondiente.
12. Si el n�mero es menor que cero, imprimir que es un n�mero negativo.
13. Evaluar si el n�mero es par o impar.
14. Si el n�mero es par, imprimir que es par.
15. Si el n�mero es impar, imprimir que es impar.
16. Imprimir que el n�mero es menor que cero.
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
      printf("El n�mero es cero.\n");
      
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
