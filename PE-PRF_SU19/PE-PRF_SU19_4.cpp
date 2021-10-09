#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);
	





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	int space=n-1;
	for (int i=1;i<n;i++){
		for(int i=1;i<=space;i++){
			printf(" ");
		}
		int start=space+1;
		int end = n+(n-start);
		for(int j=start;j<=end;j++){
			if(j==start||j==end){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
		space--;
	}
	for(int i=1;i<=2*n-1;i++){
		printf("*");
	}
}
  

