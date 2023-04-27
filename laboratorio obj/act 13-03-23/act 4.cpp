#include <stdio.h>
int num1, num2, i;
main() 
{
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
}
