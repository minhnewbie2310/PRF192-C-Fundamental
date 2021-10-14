#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
main()
{
	int *pa;
	int n,i;
	printf("\nNhap so phan tu : ");
	scanf("%d", &n);
	pa= (int *)malloc(n*sizeof(int));
	for (i=0;i<n;i++)
	{
		printf("\nA[%d]= ", i+1);
		scanf("%d", pa+i);
	 }
	printf("\nDay so da nhap\n");
	for (i=0;i<n;i++){
		printf("%7d", *(pa+i));
	}  
	return 0;
}

