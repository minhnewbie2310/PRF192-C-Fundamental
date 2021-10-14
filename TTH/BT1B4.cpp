#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int giaiThua(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("%d!(%d-1)! = %d",n,n,giaiThua(n)*giaiThua(n-1));
	
	return 0;
}

