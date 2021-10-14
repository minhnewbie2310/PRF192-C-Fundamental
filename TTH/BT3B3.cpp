#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	int m=n;
	int sum=0;
	while (m!=0){
		sum = sum + (m%10);
		m=m/10;
		
	}
	printf("s = %d", sum);
	return 0;
}

