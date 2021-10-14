#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int i,j;
	int star=1;
	for (i=1;i<=n;i++){
		for(j=1;j<=star;j++){
			printf("*");
		}
		printf("\n");
		star=star+2;
	}
	return 0;
}


