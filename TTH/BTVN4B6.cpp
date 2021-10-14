#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
main()
{
	int n,i;
	int x[n];
	int count;
	printf("\nEnter size of array: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		int count;
		int temp;
		count=1;
		printf("\nx[%d]= ", i);
		scanf("%d", &x[i]);
		temp=x[0];
		if(x[i]!=temp){
			count++;
		}	
	}
printf("\nCo %d gia tri khac nhau trong mang", count);
}

