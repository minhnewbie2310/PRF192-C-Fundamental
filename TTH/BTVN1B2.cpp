#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int i, n;
	double l, sum=0;
	printf("\nEnter n: ");
	scanf("%d", &n);
	if(n==0){
		printf("\nKhong the tinh duoc");
	}else{
		for(i=1;i<=n;i++){
			l=1/(double)i;
			sum = sum + l;
		}
		printf("\nTong cac nghich dao la %.5lf", sum);
		return 0;
	}
	
}

