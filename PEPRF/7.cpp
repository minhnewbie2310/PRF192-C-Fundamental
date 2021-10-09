#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	int n=5; 
	char name[n][200];
	for(int i=0;i<n;i++){
		gets(name[i]);
	}





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(int i=0;i<n-1;i++){
  		for(int j=0;j<n-1){
  			if(strcmp(name[j],name[j+1])>0){
  				char temp[200];
  				strcpy(temp,nam[j]);
  				strcpy(name[j],name[j+1]);
  				strcpy(name[j+1],temp);
			  }
		  }
	  }
	  for (int i=0;i<n;i++){
	  	printf("%s ",name{[i]);
	  }
}
  

