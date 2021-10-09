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
  int space=0;
  for(int i=1;i<=n;i++){
  	for(int j=1;j<=space;j++){
  		printf(" ");
	  }
	for(int j=1;j<=n-space;j++){
		printf("*");
	}
	space++;
	printf("\n");  
  }
}
  

