#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct date
{
	int y;
	int m;
	int d;
};
struct student
{
	char  masv[10];
	char ht[30];
	struct date namsinh;
	float diem;
	
};

main() 
{
  	struct student st1, st2;
  	printf("\nMA SINH VIEN: ");
  	gets(st1.masv);
  	printf("\nHO TEN SINH VIEN: ");
  	gets(st1.ht);
  	printf("\nNAM SINH CHO SINH VIEN: ");
  	printf("\nNAM: ");
  	scanf("%d", &st1.namsinh.y);
  	printf("\nTHANG: ");
  	scanf("%d", &st1.namsinh.m);
  	printf("\nNGAY: ");
  	scanf("%d", &st1.namsinh.d);
  	printf("\nDIEM THI: ");
  	scanf("%f", &st1.diem);
  	
  	printf("\nTHONG TIN SINH VIEN\n");
  	printf("\nMA: %s\nHO TEN: %s\nNGAY SINH: %d-%d-%d\nDIEM THI: %f", st1.masv, st1.ht, st1.namsinh.d, st1.namsinh.m, st1.namsinh.y, st1.diem);
}
  

