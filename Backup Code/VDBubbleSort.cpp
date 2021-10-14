#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int temp;
int n,i,j;
main()
{
	int a[n];
	printf("\nNhap so phan tu : ");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		printf("\nA[%d]= ", i+1);
		scanf("%d", &a[i]);
	}
	
	
	for (i=0;i<n-1;i++)
		for (j=i+1; j<n;j++)
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("\nDay so da nhap\n");
	for (i=0;i<n;i++)
	printf("%7d", a[i]);		
}


