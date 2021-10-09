#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int ar[n];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &ar[i]);
	}





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  		int sum=0;
	  	for(int i=0;i<n;i++){
  			if(ar[i]%2==0){
  				sum+=pow(ar[i],2);
		  	}
	  	}
	  	printf("%d", sum);
}
  

