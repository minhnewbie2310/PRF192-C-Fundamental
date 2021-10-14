#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int m,n;
	printf("\nNhap m: ");
	scanf("%d", &m);
	printf("\nNhap n: ");
	scanf("%d", &n);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j==1||j==n||i==1||i==m){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

