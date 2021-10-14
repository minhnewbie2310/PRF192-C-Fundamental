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
	
	char c;
	printf("Enter c: ");
	scanf("%c", &c);
	
	int count=0;
	for (int i=0;i<strlen(s);i++){
		if(s[i]==c){
			count++;
		}
	}
	printf("\nChu %c co %d lan", c, count);	
	return 0;
}

