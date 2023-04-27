#include<stdio.h>
int dinero, ahorra, tot;
main()
{

printf("ingrese el dinero a invertir\n");
scanf("%d",& dinero);

ahorra=dinero*0.02;
tot=dinero+ahorra;
printf("el usuario ahorra un total de %d$ \n",tot);
	
}
