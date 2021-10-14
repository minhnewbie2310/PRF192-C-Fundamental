#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define NMAX 100
void Input(int *p, int *m);
void display(int a[NMAX], int m);
int search(int a[NMAX], int m, int k);
main()
{
	int a[NMAX];
	int n;
	int pos;
	int key;
	Input(a,&n);
	printf("\nDAY PHAN TU DA NHAP\n");
	display(a,n);
	printf("\nNhap khoa tim kiem");
	scanf("%d", &key);
	pos =  search(a,n,key);
	if(pos==-1)
		printf("\nKhong tim thay phan tu %d trong day", key);
	else	
		printf("\nPHAN TU %d TIM THAY O VI TRI %d", key, pos);
	return 0;
}

void Input(int *p, int *m)
{
	int i;
	printf("\nNhap so phan tu: ");
	scanf("%d", &m);
	for (i=0;i<*m;i++)
	{
		printf("\nA[%d]= ", i+1);
		scanf("&d", p+i);
	}
	
}

void display(int a[NMAX], int m)
{
	int i;
	for (i=0;i<m;i++)
		printf("%7d", a[i]);
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
