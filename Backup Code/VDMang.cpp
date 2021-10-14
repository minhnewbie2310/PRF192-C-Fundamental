#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define NMAX 100
int a[NMAX], n, i;
void input();
void display(int x[NMAX], int n);
int tongsochan(int x[NMAX], int n);

main()
{
	int so_chan;
	printf("\nChuong trinh tinh tong so chan");
	input();
	printf("\nDay so da nhap");
	display(a , n);
	tongsochan(a, n);
	printf("\nTong cac so chan trong day la : %d", tongsochan(a, n));
	return 0;
}

void input()
{
	int i;
	printf("\nNhap so phan tu: ");
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		printf("\nPhan tu thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

int tongsochan(int x[NMAX], int n)
{
	int i, s=0;
	for (i=1; i<n ; i++)
		if(x[i]%2==0)
			 
			 s =s+ x[i];
	return s;		 
}

void display(int x[NMAX], int n)
{
	int i;
	for (i=0; i<n ; i++)
		printf("%5d", x[i]);
}
