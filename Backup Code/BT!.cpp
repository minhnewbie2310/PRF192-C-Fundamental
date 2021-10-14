#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int a, b, i;
	printf("\nCHUONG TRINH TIM UOC CHUNG LON NHAT");
	printf("\nNHAP HAI SO a VA b: ");
	scanf("%d%d",&a,&b);
	for (i=a;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			
			printf("\n%d la UCLN cua %d va %d", i,a,b);
			break;
		}
	}
	return 0;
}

