#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void reverse(char s[]){//in chuoi dao nguoc
	char s1[100];
	int size=0;
	for(int i= strlen(s)-1;i>=0;i--){
		s1[size++]=s[i];
	}
	s1[size]='\0';
	return s1;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[]=="ccbadefgba";
	char *s1 = reverse(s);





  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
}
  

