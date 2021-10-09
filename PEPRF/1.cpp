#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void remove(int a[], int &n, int k){
	if(k<0||k>n-1) return ;
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
}
void insert(int a[], int &n, int k, int v){
	if(k<0||k>n) return ;
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=v;
	n++;
}
int main()
{
	int n;
	int a[n];
	printf("\nNhap so phan tu : ");
	scanf("%d", &n);
	
	
	
	for (int i=0;i<n;i++){
		printf("\nNhap a[%d] ",i);
		scanf("%d", &a[i]);
	}
	
	for (int i=0;i<n;i++){
		printf("   %d ",a[i]);
		
	}
	return 0;
}

