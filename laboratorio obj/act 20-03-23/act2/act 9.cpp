#include <stdio.h>

int edad_padre = 50,edad_hijo = 20,anios = 0;
	 main() 
	 {
    

    while (edad_padre != 2 * edad_hijo) 
	{
        edad_padre++;
        edad_hijo++;
        anios++;
    }

    printf("La edad del padre sera el doble que la de su hijo en %d anios\n", anios);

    return 0;
}
