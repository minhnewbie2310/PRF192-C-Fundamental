#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
	int a, b, c;
	printf("\nNHAP 3 CANH CUA CHU VI:");
	scanf("%d%d%d",&a,&b,&c);
	int chuvi = a+b+c;
	double p=(double)(a+b+c)/2;
	double dienTich = sqrt(p*(p-b)*(p-a)*(p-c));
	
	printf("\nChu vi la %d", chuvi);
	printf("\nDien tich la %lf", dienTich);
}
