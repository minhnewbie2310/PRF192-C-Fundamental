#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
int main()
{
	long n = 0;
	double x, c, res = 0, gt = 1, k;
	scanf("%lf%lf", &x, &c);
	k= 1;
	if(x == 0) res = 1;
	else
	while(1){
		res+= k/gt;
		n++;
		k *= x;
		gt*=n;
		if((k> 0 && k/gt <= c) || (k<0 && -1*k/gt <= c)) break;
	}
	printf("e^%0.2lf = %0.6lf", x, res);
	printf("\ne^%0.2lf = %lf", x, exp(x));
	return 0;	
} 

