#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int i, j;
	for(i=2;i<=9;i++){
		for (j=1;j<=10;j++){
			printf("%d x %d = %d |", i, j, (i*j));
		}
		printf("\n");
	}	
	return 0;
}

