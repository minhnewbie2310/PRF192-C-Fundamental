
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
main ()
{
	int Tong, n, i;

	printf("\nNhap gia tri cua n: ");
	scanf("%d", &n);
	for (i = 1;i <= n; i++)
		Tong =Tong + i;
		printf("\nTong cua cac so tu 1 den n la: %d", Tong);
}
		
