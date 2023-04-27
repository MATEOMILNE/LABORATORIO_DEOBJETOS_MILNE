#include <stdio.h>

int mes, otra, i;
main()
 {
   
    do{
    printf("Ingresa un número del 1 al 12 para seleccionar un mes:\n");
    scanf("%d", &mes);
    
    	
	
    switch(mes)
	 {
        case 1:
            printf("Enero tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 2:
            printf("febrero tiene 28 días.\n");
            for(i=1; i<=28; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 3:
            printf("marzo tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 4:
            printf("abril tiene 30 días.\n");
            for(i=1; i<=30; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 5:
            printf("mayo tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 6:
            printf("junio tiene 30 días.\n");
            for(i=1; i<=30; i++) {
                printf("%d \n", i);
            }
            break;
            
            case 7:
            printf("julio tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
               case 8:
            printf("agosto tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
            
            case 9:
            printf("septiembre tiene 30 días.\n");
            for(i=1; i<=30; i++) {
                printf("%d \n", i);
            }
            break;
            
            
            case 10:
            printf("octubre tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            
            
            case 11:
            printf("noviembre tiene 30 días.\n");
            for(i=1; i<=30; i++) {
                printf("%d \n", i);
            }
            break;
            
            
            case 12:
            printf("diciembre tiene 31 días.\n");
            for(i=1; i<=31; i++) {
                printf("%d \n", i);
            }
            break;
            default:
            break;

    }
    printf("desea ver los dias de otros meses\n 1-si\n 2-no\n");
    scanf("%d",& otra);
    
	}while(otra!=2);

}
