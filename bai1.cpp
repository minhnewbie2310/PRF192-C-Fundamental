#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
void nhapmang(int a[], int &n)
{ 
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{ 
	  	printf("\nPhan tu thu %d :",i+1);
    	scanf("%d",&a[i]);
  	}
}
void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;	
}


void bubble(int a[], int n) {
	int i, j;
	//n = 4;//first 4 numbers
	//for(i = n - 4; i < n - 1; i ++) {//4 last numbers
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(a[i] > a[j]) swap(a[i],a[j]);
		}
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n;
	int a[n];
	nhapmang(a,n);





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(int i=0;i<n;i++)
  	{
  		if(a[i]%2==1){
  			bubble(a,n);
		}
		printf("%d ", a[i]);	
	}
}
  

