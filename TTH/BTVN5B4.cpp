#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int doixung(int n){
	int iv=0;
	int m=n;
	while(m<0){
		int c=n%10;
		iv=iv*10+c;
		m=m/10;
	}
	if(n==iv){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int a;
	printf("Enter a: ");
	scanf("%d", &a);
	
	if (doixung(a)){
		printf("%d la so doi xung", a);
	}else{
		printf("%d ko la so doi xung", a);
	}
	return 0;
}

