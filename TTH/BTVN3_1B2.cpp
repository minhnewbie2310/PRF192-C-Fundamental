#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("\nEnter n: ");
	scanf("%d", &n);
	int i;
	int sum=0;
	for (i=1;i<=n-2;i++){
		sum = sum + i*(i+1)*(i+2);
	}
	printf("Sum = %d", sum);
	
	return 0;
}

