#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define NMAX 100
int temp,i,j,n;
int *p;
int *m;
int a[NMAX];
void input(int *p, int *m);
void display(int a[NMAX], int n);
main()
{
	char chon;
	while(1)
	{
		system("cls");
		printf("Sap xep day so theo thu tu giam dan");
		printf("\n1-Nhap du lieu");
		printf("\n2-Sap xep");
		printf("\nx|X-Thoat");
		chon= getch();
		if(chon=='x' || chon=='X') break;
		switch(chon)
		{
			case'1':
				input(*p,*m);
				printf("\nPress Enter to continue");
				getch();
				break;
			case'2':
				display(n,a);
				printf("\nPress Enter to continue");
				getch();	
				break;
		}
	}
	return 0;
}

void input(int *p, int *m)
{
	int n;
	int a[n];
	printf("\n");
	printf("\nNhap so du lieu trong day: ");
	scanf("%d", m);
	for(int i=0;i<*m;i++){
		printf("\nA[%d]= ", i+1);
		scanf("%d", p+i);
	}
}

void display(int a[NMAX],int n)
{
	int i,j;
	int temp;
	for (i=0;i<n-1;i++)
		for (j=i+1; j<n;j++)
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		printf("\nDay so da nhap\n");
		for (i=0;i<n;i++)
			printf("%7d", a[i]);
}
