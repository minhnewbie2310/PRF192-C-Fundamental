#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	double x;
	int n,i;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter x: ");
	scanf("%lf", &x);
	double s=1+x;
	double t=x;
	for (i=3;i<=2*n+1;i=i+2){
		t = t * (x*x) / (i*(i-1));
		s += t;
	}
	printf("S = %lf", s);
	return 0;
}

