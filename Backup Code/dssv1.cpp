#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void bubble(int a[], int n);
void swap(int &a, int &b);
main() {
  	system("cls");
  	int n;
  	int sv[n];
  	char hodem[n];
  	char ten[n];
  	char hovaten[n];
  	printf("\nNhap so sinh vien: ");
  	scanf("%d", &n);
  	for (int i=0;i<n;i++){
  		
  		printf("\nNhap ho va ten dem cua sinh vien thu %d: ", i+1);
  		scanf("%s", &hodem[i]);
  		fflush(stdin);
  		printf("\nNhap ten cua sinh vien thu %d: ", i+1);
  		scanf("%s", &ten[i]);
	  	}
	
	for (int i=0;i<n;i++){
		hovaten[i] = strcat(hodem[i]," ");
	  	hovaten[i] = strcat(hovaten[i], ten[i]);
	}  	
	
	for (int i=0;i<n;i++){
		bubble(ten,n);
	}
	
	 	
  
}
void bubble(int *a[], int n) {
	int i, j;
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(a[i] > a[j]) swap(a[i],a[j]);
		}
	}
}
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;	
}
  

