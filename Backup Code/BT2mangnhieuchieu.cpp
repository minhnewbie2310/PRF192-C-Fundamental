#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define NMAX 100
void nhapmatran(int a[][NMAX], int n, char ch){
	
	int i, j;
	int tg;
	for(i=0; i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("\n%c[%d, %d]=",ch, i+1, j+1);
			scanf("%d",&tg ); 
			a[i][j]= tg;
		}
	}
void inmatran(int a[NMAX][NMAX], int n){
	int i, j;
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%7d", a[i][j]);
		printf("\n");
	}
}	
void tichmatran(int a[NMAX][NMAX], int b[NMAX][NMAX], int c[NMAX][NMAX], int n){
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			c[i][j] = a[i][j] * b[j][i];
}
main()
{
	char chon;
	while(1)
	{
		system("cls");
		printf("\nTong hai ma tran");
		printf("\n1-Nhap ma tran");
		printf("\n2-Tinh tich");
		printf("\nX|x-Thoat");
		chon=getch();
		if(chon=='x'||chon=='X') break;
		switch(chon)
		{
			case'1':
				int a[NMAX][NMAX], b[NMAX][NMAX];
				int n;
				printf("\nNhap so chieu cua ma tran: ");
				scanf("%d", &n);
				nhapmatran(a,n,'A');
				nhapmatran(b,n,'B');
				printf("Press any key to continue");
				getch();
				break;
			case'2':
				int c[NMAX][NMAX];
				tichmatran(a,b,c,n);
				printf("\nMA TRAN TICH\n");
				inmatran(c,n);
				printf("Press any key to continue");
				getch();
				break;	
		}
	}
	return 0;
}

