#include <stdio.h>

int main() 
{
    int t1, t2, t3, res;
    
    for (t1 = 0; t1 < 500; t1++) 
	{
        for (t2 = 0; t2 < 500; t2++) 
		{
			for (t3 = 0; t3 < 500; t3++)
			{
            res = (t1 * t1) + (t2 * t2);
            if (res == t3 * t3)
			{
                printf("Terna de Pitagoras: %d, %d, %d \n", t1, t2, t3);
            }	
			}
        }
    } 
}

