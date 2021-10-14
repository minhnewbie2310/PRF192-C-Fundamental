#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int isPrime(int x);

main()
{
	int n1, n2, i, dem=0;
	printf("\nCHUONG TRINH TIM SO NGUYEN TO TRONG DOAN [N1;N2] ");
	printf("\nNHAP CAN DUOI N1 :");
	scanf("%d", &n1);
	printf("\nNHAP CAN TREN N2 :");
	scanf("%d", &n2);
	printf("\nDANH SACH CAC SO NGUYEN TO TU %d DEN %d LA\n",n1,n2);
	
	for(i=n1; i<=n2;i++)
	{
		
		if(isPrime(i))
		{
			dem++;
			printf("%7d",i);
			if (dem % 5 ==0) printf("\n");
		}
	}

	return 0;
}

int isPrime(int x)
{
	int i=2;
	while (x%i!=0)
		i++;
	if(i<x) return 0;
	else return 1;	
}

