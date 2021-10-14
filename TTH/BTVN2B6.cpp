#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int s=0;
	int	n,i;
	int x[n];
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("\nx[%d]= ", i+1);
		scanf("%d", &x[i]);
		if((x[i]-(x[i]%10))%50==0&&(x[i]-(x[i]%10))%100!=0)
			s=s+x[i];
	}
	printf("s= %d", s);
	return 0;
}

