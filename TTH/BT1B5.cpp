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
	}
		

	int flag=0;
	for (int i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d", i);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("-1");
	}	
	return 0;
	
}

