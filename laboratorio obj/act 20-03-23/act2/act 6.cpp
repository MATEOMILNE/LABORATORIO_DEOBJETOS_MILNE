#include <stdio.h>
float alquiler, impuesto;
main()
 {
    printf("Ingrese el valor del alquiler: ");
    scanf("%f", &alquiler);

    if (alquiler <= 202) 
	{
        impuesto = 0;
    } else 
	
	if (alquiler <= 607) 
	{
        impuesto = alquiler * 0.05;
    } else 
	
	if (alquiler <= 1013) 
	{
        impuesto = alquiler * 0.1;
    } else 
	
	if (alquiler <= 1418) 
	{
        impuesto = alquiler * 0.15;
    } else 
	
	{
        impuesto = alquiler * 0.25;
    }

    printf("El impuesto por concepto de alquiler es: %.2f\n", impuesto);

    
}
