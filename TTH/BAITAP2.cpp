#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	double a, b, c, delta, x1, x2;
	printf("\nCHUONG TRINH GIAI PHUONG TRINH BAC 2 MOT AN");
	printf("\nNHAP 3 HE SO a, b, c: ");
	scanf("%lf%lf%lf", &a,&b,&c);
	delta= (b*b)/4*a*c;
	if(delta<0){
		printf("\nPHUONG TRINH VO NGHIEM");
	}else if(delta==0){
		printf("\nPHUONG TRINH CO NGHIEM DUY NHAT LA : ", -(b/2*a));
	}else{
		printf("\nPHUONG TRINH CO 2 NGHIEM LA:");
		printf("\nX1 = %lf", ((-b)+sqrt(delta))/2*a);
		printf("\nX2 = %lf", ((-b)-sqrt(delta))/2*a);
	} 
	
	return 0;
}

