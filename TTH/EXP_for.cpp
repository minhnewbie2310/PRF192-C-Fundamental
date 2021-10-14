#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("\nEnter number (2-9): ");
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++){
		printf("%d x %d = %d\n", n , i , (n*i));
	}
	return 0;
}

