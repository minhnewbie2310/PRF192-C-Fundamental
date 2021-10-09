#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void swap(int &a, int &b){
	int temp;
	a = b;
	b = temp;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n=7;
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (int i=0;i<n;i++){
		int imin=i+1;
		
		for (int j=i+1;j<n;j++){
			if(a[j]<a[imin]){
				imin=j;
			}
		}
		if(a[i]>a[imin]){
			swap(a[i],a[imin]);
		}
	}
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
}
