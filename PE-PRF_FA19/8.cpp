#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char c;
	scanf("%c", &c);





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int n=(int)c;
  printf ("%d ", n);
  
  int size=0;
  int a[100];
  while(n>0){
  		a[size]=n%8;
  		size++;
  		n=n/8;
  	}
  	for(int i=size-1;i>=0;i--){
  		printf("%d", a[i]);
	  }
  
}
  

