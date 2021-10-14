/*
	chuong trinh tinh dien tich tam giac va chu vi tam giac
	dien tich s = sqrt(p*(p-a)*(p-b)*(p-c))
	p la nuwa chu vi
	chu vi = a + b + c
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	float a, b, c; //khai bao bien chua do dai 3 canh cua tam giac 
	float S, C, P; //Bien dien tich, chu vi va nua chu vi
	//Nhap du lieu cho cac canh cua tam giac
	printf("\nCHUONG TRINH TINH DIEN TICH VA CHU VI TAM GIAC");
	printf("\nDo dai canh a=");
	scanf("%f",&a);
	printf("\nDo dai canh b=");
	scanf("%f",&b);
	printf("\nDo dai canh c=");
	scanf("%f",&c);
	//Tinh dien tich va chu vi tam giac
	C = a+b+c;
	P = C/2;
	S = sqrt(P*(P-a)*(P-b)*(P-c));
	//In thong bao dien tich va chu vi tam giac
	printf("\nDIEN TICH TAM GIAC LA:%10.2f",S);
	printf("\nCHU VI TAM GIAC LA:%10.2f",C);
}
