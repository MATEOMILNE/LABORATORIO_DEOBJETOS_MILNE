#include<stdio.h>
int sueldo, sueldofinal;
main()
{
	printf("ingrese el sueldo del trabajador \n");
	scanf("%d",& sueldo);
	
	if(sueldo<8000)
	{
		sueldofinal=sueldo*1.15;
		
		printf("el nuevo sueldo sera de %d ya que su sueldo se encuntra debajo de los 8000$", sueldofinal);
	}
	
	
	if(sueldo>=8000)
	{
		sueldofinal=sueldo*1.12;
		printf("el nuevo sueldo sera de %d ya que su sueldo se encuntra por encima de los 8000$", sueldofinal);
	}
		
}
