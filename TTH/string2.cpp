#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[100];
	printf("Enter s: ");
	gets(s);
	char u,e,i,o,a;
	int count=0;
	for (int i=0;i<strlen(s);i++){
		if(s[i]==u||s[i]==e||s[i]==o||s[i]==i||s[i]==a){
			count++;
		}
	}
	
	return 0;
}

