#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
	float a, b;
	printf("\nCHUONG TRINH TINH a/b");
	printf("\nNHAP 2 SO a VA b: ");
	scanf("%d%d",&a,&b);
	if (b==0){
		printf("b PHAI KHAC 0");
	}else{
		printf("\nKET QUA LA: %.3f", a/b);
	}	
	return 0;
}

