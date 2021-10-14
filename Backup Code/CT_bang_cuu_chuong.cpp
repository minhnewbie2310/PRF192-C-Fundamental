#include <conio.h>
#include <string.h>
#include <stdio.h>

int main ()
{
	int a, n, b;
	printf("\nBANG CUU CHUONG");
	printf("\n");
	
	for (a=1; a <= 10; a++)
		{
			for (b =2 ; b <= 9; b++)
			{
				n = a*b;
				printf("%d x %d = %d", a, b, n);
				printf("\n");
			}
			printf("\n");
		}
		
	return(0);	
}
