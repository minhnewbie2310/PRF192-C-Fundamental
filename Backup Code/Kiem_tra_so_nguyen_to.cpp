#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
main()
{
	int n,i ;
	printf("\nChuong trinh kiem tra so nguyen to");
	printf("\nNhap so can kiem tra: ");
	scanf("%d", &n);
	n = abs(n);
	if(n==0)
		printf("\nHay nhap so lon hon 0");
	else if (n<=2) printf("\n%d la so nguyen to",n);
	else 
	{
		i = 2;
		while (n % i != 0)
			i++;
		if(i ==n) printf("\n%d la so nguyen to", n);
		else printf("\n%d la hop so",n);
	}
	return(0);	
}
