#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	  system("cls");
	  char hodem1[30];
	  char ten1[30];
	  char hodem2[30];
	  char ten2[30];
	  char hovaten1[60];
	  char hovaten2[60];
	  printf
	  hovaten1 = strcat(hodem1," ");
	  hovaten1 = strcat(hovaten1, ten1);
	  hovaten2 = strcat(hodem2," ");
	  hovaten2 = strcat(hovaten2, ten2);
	  
	  for (int i=0;i<30;i++){
	  		for (int j=0;j<30;j++){
	  			if(ten1[i]>ten2[j]){
	  				printf("\nNguoi thu hai dung truoc");
				  }else if(ten1[i]<ten2[j]){
				  	printf("\nNguoi thu nhat dung truoc");
				  }
				  break;
			  }
	  }
	  
	  
	  
}
	  
  
  

