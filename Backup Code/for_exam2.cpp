#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
main ()
{
	int Tong, n, i
	char hoidap
	{
	}
	printf("\nNHAP GIA TRI CUA n: ");
	scanf("%d", &n);
	if (n==0 || n%2==1)
		printf("\nGIA TRI CUA n KHONG THOA MAN");
	else 
		{
			for (i=2;i <= n;i+2)
		Tong = Tong + i;
		printf ("\nGIA TRI CUA TONG CAC CHU SO CHAN TOI n LA: ", Tong);
		}
}
