#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int hinh;
	printf("\nCHUONG TRINH TINH DIEN TICH");
	printf("\n1.HINH VUONG \n2.HINH CHU NHAT \n3.HINH TRON \n4.TAM GIAC \n5.HINH THANG");
	printf("\nMOI BAN CHON CHU SO TUONG UNG VOI HINH CAN TINH: ");
	scanf("%d", &hinh);
	switch(hinh) {
		case 1 :
			double canhHinhVuong,dienTichHinhVuong;
			printf("\nNHAP DO DAI CUA CANH HINH VUONG: ");
			scanf("%lf",&canhHinhVuong);
			dienTichHinhVuong= canhHinhVuong*canhHinhVuong;
			printf("\nDIEN TICH HINH VUONG LA: %lf", dienTichHinhVuong);
			break;
		case 2 :
			double chieuDai, chieuRong, dienTichHinhChuNhat;
			printf("\nNHAP DO DAI CUA CHIEU DAI & CHIEU RONG: ");
			scanf("%lf%lf", &chieuDai, &chieuRong);
			dienTichHinhChuNhat= chieuDai*chieuRong;
			printf("\nDIEN TICH HINH CHU NHAT LA: %lf", dienTichHinhChuNhat);
			break;
		case 3 :
			double c1, c2, c3, p, dienTichTamGiac;
			printf("\nNHAP DO DAI 3 CANH: ");
			scanf("%lf%lf%lf", &c1, &c2, &c3);
			p= (c1+c2+c3)/2;
			dienTichTamGiac= sqrt(p*(p-c1)*(p-c2)*(p-c3));
			printf("\nDIEN TICH TAM GIAC LA: %lf", dienTichTamGiac);
			break;
		case 4 :
			double banKinh, dienTichHinhTron;
			printf("\nNHAP BAN KINH HINH TRON");
			scanf("%lf", &banKinh);
			dienTichHinhTron= 3.14*(banKinh*banKinh);
			printf("\nDIEN TICH HINH TRON LA: %lf", dienTichHinhTron);	
			break;
		case 5 :
			double day1, day2, chieuCao, dienTichHinhThang;
			printf("\nNHAP DO DAI CUA 2 CANH DAY: ");
			scanf("%lf%lf", &day1, &day2);
			printf("\nNHAP CHIEU CAO HINH THANG: ");
			scanf("%lf", &chieuCao);
			dienTichHinhThang= (((day1+day2)*chieuCao)/2);
			printf("\nDIEN TICH HINH THANG LA: %lf", dienTichHinhThang);
			break;
				}
	return 0;
}

