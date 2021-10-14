#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for (int i=0;i<n;i++){
		printf("Enter a[%d]: ", i);
		scanf("%d", &a[i]);
		
	int value; 
	printf("Enter value: ");
	scanf("%d", &value);
	
	int flag=0;
	for (int i=0;i<n;i++){
		if(a[i]==value){
			printf("%d", i);
			flag=1;
		}
	}
	if(flag==0){
		printf("not found!");
	}	
	return 0;
	}
	return 0;
}

