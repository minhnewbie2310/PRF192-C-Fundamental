#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int isprime(int n){
	if(n<2){
		return 0;
	}else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return 0;			
			}
		}
		return 1;
	}
}

int countprimelessthan100(int a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(isprime(a[i])==1&&a[i]<100){
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	printf("enter size of array: ");
	scanf("%d", &n);
	
	int a[n];
	
	for (int i=0;i<n;i++){
		printf("Enter a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("so luong: %d",countprimelessthan100(a,n));
	return 0;
}

