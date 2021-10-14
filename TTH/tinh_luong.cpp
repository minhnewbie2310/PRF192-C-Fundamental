#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	double diem_ly;
	double diem_hoa;
	double diem_toan;
	printf("\nNHAP DIEM LY: ");
	scanf("%lf", &diem_ly);
	
	printf("\nNHAP DIEM HOA: ");
	scanf("%lf", &diem_hoa);
	
	printf("\nNHAP DIEM TOAN: ");
	scanf("%lf", &diem_toan);
	
	double diemtb = (diem_ly+diem_hoa+diem_toan)/3;
	printf("\nDIEM TRUNG BINH LA: %lf", diemtb);
	

}
