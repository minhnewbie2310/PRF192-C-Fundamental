#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int i, n,s=0;
int prime(int n);
int main()
{
	printf("\nEnter n: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
		if(prime(i)==1&&n%i==0)
			s+=i;
	printf("\nTong cac uoc nguyen to cua %d la %d",n, s);
	return 0;
}

int prime(int n)
{
	int i, s=0;
	for (i=0;i<=sqrt(n);i++);
		if (n%i==0){
			return 0;
		}	
	return 1;		
}

