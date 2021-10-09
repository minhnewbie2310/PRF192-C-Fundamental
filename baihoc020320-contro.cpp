/*
- Con tro:
	o nho = 1byte 
	+ con tro la 1 loai bien k de luu giu gia tri, 
	ma de tro den 1 gia tri khac, chua dia chi cua du lieu.
	+ Con tro dung de tra ve nhieu hon 1 gia tri tu 1 ham 
	(vi ham chi tra ve duy nhat 1 gia tri)
	+cap phat bo nho dong
- Khai bao:
	[kieu du lieu] *[ten con tro]
	int *p;
	float *q;
- Cac toan tu dc su dung:
 & : toan tu lay ve dia chi con tro
 * : lay ve gia tri con tro
- 1 con tro co the tro nhieu bien khac nhau 
	LUC DO 2 CON TRO CO FIA CHI VA GIA TRI GIONG NHAU
- gan gia tri :
*[ten con tro] = gia tri
- cac phep toan voi con tro:
	.++,-- : chuyen con tro den cac o nho cu phan tu ke tiep
	.so sanh 2 con tro
	if (p!=q) p,q co cung tro den 1 vung nho hay k?	
	if (p>q) p co nam trong o nho dung sau o nho cua q k?
	*p=NULL con tro (rong~) chua tro den dau ca.
*/

#include <stdio.h>
#include <conio.h>
main()
{
	int x =10;
	double y=5;
	int *px;
	double *py; //con tro
	px = &x; // con tro px tro den bien x
	py= &y; // con tro py tro toi bien y
	
	(*px)++;//THAY DOI GIA TRI CON TRO THAY VI 
			 //THAY DOI GIA TRI BIEN <=> x++
	py++;//tang con tro py len 1 => tang len 1 o nho
	
	printf("\nCON TRO px CHUA GIA TRI LA: %d", *px);
	printf("\nBIEN X CO GIA TRI LA: %d", x);
	
	printf("\nCON TRO py++ CHUA GIA TRI LA: %lf", *py);
	printf("\nBIEN Y CO GIA TRI LA: %d", y);
	
}

