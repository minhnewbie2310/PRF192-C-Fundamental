#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for (int i=0; i<n ;i++){
		printf("Enter a[%d]: ",i);
		scanf("%d", &a[i]);
	}
	
	for (int i=0;i<n;i++){
		int min = a[0];
		if(a[i]<= min){
			printf("%d ", i);
		}
	}
	return 0;
}
