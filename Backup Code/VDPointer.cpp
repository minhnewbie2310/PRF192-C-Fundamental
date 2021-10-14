#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void Input(int *p, int *m);
int main()
{
	int a[100];
	int i, n, tong;
	int *pa;
	pa =a;
	
	printf("\nNHAP SO PHAN TU: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("\na[%d]= ", i+1);
		scanf("%d", pa+i);
	}
	Input(a, &n);
	printf("\nDAY SO DA NHAP LA\n");
	tong = 0;
	for (i=0; i<n; i++)
	{
		tong = tong + *(pa+i);
		printf("%7d", *(pa+i));
	}
	printf("\nTong day so la : &d");
	return 0;
}

void Input(int *p, int *m)
{
	int a[100];
	int i, n, tong;
	int *pa;
	pa =a;
	printf("\nNHAP SO PHAN TU: ");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("\na[%d]= ", i+1);
		scanf("%d", pa+i);
	}
}

