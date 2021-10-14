#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char s[100];
	char s1[100];
	printf("Enter s: ");
	gets(s);
	
	int vowels=0;
	int consonants=0;
	for (int i=0;i<strlen(s);i++){
		if(s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='a'||s[i]=='i'){
			vowels++;
		}else{
			consonants++;
		}
	}
	
	printf("%s co %d nguyen am", s, vowels);
	printf("%s co %d phu am", s, consonants);
	return 0;
}

