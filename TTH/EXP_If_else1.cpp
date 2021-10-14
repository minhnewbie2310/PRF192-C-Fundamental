#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
int main(){
	int year;
	printf("Enter year: ");
	scanf("%d",&year);
	
	if(year%400==0){
		printf("%d la nam nhuan", year);
	}else if(year%4==0&&year%100==0){
		printf("%d la nam nhuan", year);
	}else{
		printf("%d khong la nam nhuan", year);
	}
	return 0;
}
 

