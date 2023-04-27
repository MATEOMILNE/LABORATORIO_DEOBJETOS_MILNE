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
