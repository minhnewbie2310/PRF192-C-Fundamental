#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define NMAX 100
void Input(int *p, int *m);
void display(int x[NMAX], int m);
int search(int a[NMAX], int m, int k);
main()
{
	int a[NMAX];
	int n;
	int pos;
	int key;
	char chon;
	while(1)
	{
		system("cls");
		printf("\nChuong trinh tim kiem gia tri trong day so nguyen to");
		printf("\n1-Nhap cac gia tri trong day so");
		printf("\n2-Tim kiem");
		printf("\nx|X-Thoat");
		chon=getch();
		if(chon=='x' || chon=='X') break;
		switch(chon)
		{
			case '1':
				Input(a, &n);
				display(a,n);
				printf("\nDA NHAP XONG, BAM ENTER DE VE MENU");
				getch();
				break;
			case '2':
				printf("\nNhap khoa tim kiem");
				scanf("%d", &key);
				pos =  search(a,n,key);
				if(pos==-1)
					printf("\nKhong tim thay phan tu %d trong day", key);
				else	
					printf("\nPHAN TU %d TIM THAY O VI TRI %d", key, pos);
				printf("\nDA TIM KIEM XONG, BAM ENTER DE VE MENU");
				getch();
				break;				
		}
	}
}

void Input(int *p, int *m)
{
	int i;
	printf("\nNhap so phan tu: ");
	scanf("%d", m);
	for (i=0;i<*m;i++)
	{
		printf("\nA[%d]= ", i+1);
		scanf("%d", p+i);
	}
	
}

void display(int x[NMAX], int m)
{
	int i;
	for (i=0;i<m;i++)
		printf("%7d", x[i]);
}

int search(int a[NMAX], int m, int k)
{
	int i;
	a[m]=k;
	i= 0;
	while(a[i]!=k)
		i++;
		
	if(i<m)
		return i+1;
	else return -1;		
}

