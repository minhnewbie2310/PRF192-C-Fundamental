#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#define NMAX 100
void input(char hvt[NMAX][NMAX],float diem[NMAX][NMAX], int n, int m);
void display(float diem[NMAX][NMAX], int n, int m);
void tbt(float diem[NMAX][NMAX], int n, int m);

main() {
	float diem[NMAX][NMAX];
	char hvt[NMAX][NMAX];
	int sosv, somh;
	char chon;
	while(1) 
	{
		system("cls");
		printf("\nQUAN LY DIEM THI SV");
		printf("\n1-Nhap diem");
		printf("\n2-In bang diem");
		printf("\n3-Tinh diem trung binh");
		printf("\nx|X-Thoat");
		chon = getch();
		if(chon=='x'||chon=='X') break;
		switch(chon){
			case'1':
				printf("\nNhap so sv: ");
				scanf("%d", &sosv);
				printf("\nNhap so mh: ");
				scanf("%d", &somh);
				input(hvt,diem,sosv,somh);
				printf("\nEnter to continue");
				getch();
				break;
			case'2':
				printf("\nBang diem cac mon thi\n");
				display(diem,sosv,somh);
				printf("\nEnter to continue");
				getch();
				break;
			case'3':
				tbt(diem,sosv,somh);
				printf("\nBANG DIEM TONG KET CHO SINH VIEN\n");
				display(diem,sosv,somh+1);
				printf("\nEnter to continue");
				getch();
				break;		
		}
		
	}
 
}

void input(char hvt[NMAX][NMAX],float diem[NMAX][NMAX], int n, int m)
{
	int i,j;
	float tg;
	
	for (i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nNhap ten sinh vien: ");
		gets(hvt[i]);
		
		printf("\nNhap diem cac mon cua sinh vien");
		printf("\n-------------------------------\n");
		for (j=0;j<m;j++)
		{
			printf("\nDiem mon thu %d: ", j+1);
			scanf("%f", &tg);
			diem[i][j]= tg;
		}
	}
}

void display(float diem[NMAX][NMAX], int n, int m)
{
	int i,j;
	printf("%5s" , "| STT |");
	for(i=0;i<m;i++)
		printf("M%-7d|",i+1);
	printf("\n");	
	for(i=0;i<n;i++)
	{
		printf("|%5d|", i+1);
		for(j=0;j<m;j++)
		{
			printf("%-8.1f|", diem[i][j]);	
		}
		printf("\n");	
	}	
}

void tbt(float diem[NMAX][NMAX], int n, int m)
{
	int i,j;
	float tb;
	for(i=0;i<n;i++)
	{
		tb=0;
		for(j=0;j<m;j++)
			tb+=diem[i][j];
		tb = tb/m;
		diem[i][m] = tb;	
	}
}
  

