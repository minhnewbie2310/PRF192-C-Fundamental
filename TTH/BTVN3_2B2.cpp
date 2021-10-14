#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	double x,t,d=-1;
	double s=1+x,i;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter X: ");
	scanf("%lf", &x);
	for (i=2;i<=n;i++){
		t=t*(x/i);
		s=s+d*t;
		d=-d;
	}
	printf("S =%lf", s);
	return 0;
}

