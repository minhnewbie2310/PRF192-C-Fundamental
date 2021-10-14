#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int count =0, i =0;
	if(n<2){
		printf("\nn khong la so nguyen to");
	}else{
		for(i=1;i<=n;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==2){
			printf("%d la so nguyen to ",n);
		}else{
			printf("%d khong la so nguyen to ",n);
		}
	}
	return 0;
}

