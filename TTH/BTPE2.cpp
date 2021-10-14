#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	double x;
	int n;
	double sum=0;
	printf("\nNhap x: ");
	scanf("%lf",&x);
	printf("\nNhap n: ");
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		sum-=pow(x,i)*pow(-1,i);
	}
	
	
	printf("\nTong la: %lf ", sum);
	return 0;
}

