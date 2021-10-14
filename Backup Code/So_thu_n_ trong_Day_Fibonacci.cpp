#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
main()
{
	int n, i;
	long int f=0, f1, f2;
	printf("\nTinh so fibonacci thu n");
	printf("\nNhap so thu tu can tim:");
	scanf("%d",&n);
	if(n<0)
		printf("\nBan phai nhap so lon hon 0");
	else if(n<=2)
		f=1;
	else
		f1 = f2 = 1;
		
		for(i=3; i<=n;i++)
		{
			f= f1+f2;
			f2=f1;
			f1=f;
		}
}
