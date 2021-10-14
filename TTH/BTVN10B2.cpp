#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main(){
    int m, n;
	int a=m, b=n;
	printf("\nEnter m & n: ");
	scanf("%d%d",m,n);
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
	printf("UCLN(%d,%d) = %d",m,n,a);
	printf("BCNN(%d,%d) = %d",m,n,(m*n/a)); 
	return 0;
}

