#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void nhapmang(int a[], int &n)
{ 
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{ 
	  	printf("\nPhan tu thu %d :",i+1);
    	scanf("%d",&a[i]);
  	}
}

void gop(int a[],int n,int b[],int m,int c[],int &p)
{
 	p=n+m; 
 	for(int i=0;i<p;i++)
  	{
   		if(i<n) 
     	c[i]=a[i];
   		else c[i]=b[i-n];  
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
	int a[50],b[0],c[100],n,m,p;
	nhapmang(a,n);
	printf("\nNhap gia tri them vao: ");
	scanf("%d", &m);
	b[0] = m;



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	gop(a,n,b,1,c,p);
  	for(int i=0;i<p;i++){
		bubble(c,p);
		printf("%d ", c[i]);
	}
}
  

