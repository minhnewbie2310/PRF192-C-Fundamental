#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 5
main()
{
	int i, j;
	
	for(i=1;i<=N; i++)
		{
			for(j=1; j<=N; j++)
				printf("\n(%d, %d)", i, j);
			printf("\n");
		}
}
