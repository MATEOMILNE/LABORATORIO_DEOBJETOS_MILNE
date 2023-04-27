#include<stdio.h>
int precio_base, descuento, tot_pagar;
main()
{
	printf("ingrese el toal a pagar: \n");
	scanf("%d",& precio_base);
	
	descuento=precio_base*0.15;
	
	tot_pagar=precio_base-descuento;
	
	printf("el cliente debe pagar %d \n", tot_pagar);
	
	
}
