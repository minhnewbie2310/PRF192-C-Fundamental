#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,n; 
	scanf("%d", &n);
	int s=0; 
	do{
	for (i=-1;i<n;i++){
		i+=2;
		s+=i; 
		}
	}while(i<n); 





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",i);
}


