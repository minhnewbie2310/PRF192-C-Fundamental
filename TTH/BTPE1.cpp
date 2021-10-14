#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("\nNhap n(n > 0): ");
	int n;
	scanf("%d",&n);
	
	int sum=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	printf("\nTong cac uoc cua %d la : %d",n,sum);
	return 0;
}

