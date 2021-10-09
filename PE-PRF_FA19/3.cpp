#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void swap(float &a, float &b) {
	int t = a;
	a = b;
	b = t;	
}
void bubble(float a[], int n) {
	int i, j;
	
	for(i = 0; i < n - 1; i ++) {
		for(j = i + 1; j < n; j ++) {
			if(a[i] < a[j]) swap(a[i],a[j]);
		}
	}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a[5];
	int i; 
	for(i=0;i<5;i++){
		scanf("%f", &a[i]); 
	}
	bubble(a,5); 



  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<5;i++){
  	printf("%f ", a[i]); 
  } 
}
  

