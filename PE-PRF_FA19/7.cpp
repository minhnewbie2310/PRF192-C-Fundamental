#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int has2digit(int n){
	if (n>=10&&n<=99){
		return 1;
	}
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		}





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int max=-1;
  for (int i=0;i<n;i++){
  	if(has2digit(a[i])&&count(a,n,a[i])==max){
  		printf("%d", a[i]);
	  }
  }
}
  

