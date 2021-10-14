#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int isPrime(int n){
	if(n<2){
		return 0;
	}else{
		int i; 
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	int n,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for (j=n;j>=1;j--){
		if(isPrime(j)==1){
			printf("%d ",j);
		}
	}
	printf("is prime");
	return 0;
}

