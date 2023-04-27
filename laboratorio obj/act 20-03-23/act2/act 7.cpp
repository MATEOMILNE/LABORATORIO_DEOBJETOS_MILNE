#include <stdio.h>

int hora, minuto;
char meridiano[3];


main() 
{
    
    printf("Ingrese la hora en formato hh:mm [24]: ");
    scanf("%d:%d", &hora, &minuto);

    if (hora >= 0 && hora <= 11) 
	{
        sprintf(meridiano, "am");
    } else 
	
	{
        sprintf(meridiano, "pm");
    }

    if (hora > 12) 
	{
        hora -= 12;
    }

    printf("La hora en formato hh:mm [am/pm] es: %02d:%02d %s\n", hora, minuto, meridiano);

  
}
