#include<stdio.h>
int x,y,matriz1[2][2],matriz2[2][2],v1,v12,v2,v22;
main()
{
	printf("carguemosle los datos a la primera matriz \n\n\n");
	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			printf("ingrese un valor para la primera matriz\n\n");
			scanf("%d",& matriz1[x][y]);
		}
	}
	
	printf("carguemosle los datos a la segunda matriz \n\n\n");
	for(y=0;y<2;y++)
	{
		for(x=0;x<2;x++)
		{
			printf("ingrese un valor para la segunda matriz\n\n");
			scanf("%d",& matriz2[x][y]);
		}
	}
	
	v1= (matriz1[0][0]*matriz2[0][0])+(matriz1[1][0]*matriz2[0][1]);
	v12=(matriz1[0][1]*matriz2[0][0])+(matriz1[1][1]*matriz2[0][1]);
	 
	v2= (matriz1[0][0]*matriz2[1][0])+(matriz1[1][0]*matriz2[1][1]);
	v22=(matriz1[0][1]*matriz2[1][0])+(matriz1[1][1]*matriz2[1][1]);	
	
	printf("		%d			%d\n\n		%d			%d\n\n",v1,v12,v2,v22);	
}
