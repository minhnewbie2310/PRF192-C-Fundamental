#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
struct student
{
	char  masv[10];
	char ht[30];
	int namsinh;
	float diem;
	
};

main() 
{
  	struct student st[20];
  	int i,n;
  	
  	printf("\nNHAP SO SINH VIEN: ");
  	scanf("%d", &n);
  	
  	for (int i=0;i<n;i++){
  		printf("\nNHAP MA SO SINH VIEN THU %d: ", i+1);
  		fflush(stdin);
		gets(st[i].masv);
  		printf("\nHO VA TEN SINH VIEN THU %d: ", i+1);
  		fflush(stdin);
  		gets(st[i].ht);
  		printf("\nNAM SINH CUA SINH VIEN THU %d: ", i+1);
  		scanf("%d", &st[i].namsinh);
  		printf("\nDIEM CUA SINH VIEN THU %d: ", i+1);
  		scanf("%d", &st[i].diem);
	}
}
  

