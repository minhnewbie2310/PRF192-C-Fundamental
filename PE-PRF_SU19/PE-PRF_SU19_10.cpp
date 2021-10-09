#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
int isprime(int n) {
	int i;
	if(n < 2) return 0;
	if(n == 2) return 1;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) return 0;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d", &n);





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i=2;i<n;i++){
  	if(isprime(i)==1){
  		printf("%d", i);
	  }
  }
}
  

