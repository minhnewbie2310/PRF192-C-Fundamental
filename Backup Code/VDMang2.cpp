#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#define NMAX 100
int max_i, min_i;
int a[NMAX], n;
void InputData();	
void Display(int x[NMAX],int n); 
int Max(int x[NMAX], int n); 
int Min(int x[NMAX], int n);

main()
{
	float max, min;
	printf("\nCHUONG TRINH NHAP DIEM THI SINH VIEN");
	InputData();
	max = Max(a, n);
	min = Min(a, n);
	printf("\nDAY SO DA NHAP\n");
	Display(a, n);
	printf("\nDIEM CAO NHAT LA:STT=%d, DIEM=%f", max_i, max);
	printf("\nDIEM THAP NHAT LA:STT=%d, DIEM=%f", min_i, min);
}

void InputData()
{
	int i;
	printf("\nNHAP SO SINH VIEN:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	do{
			printf("\nDIEM CUA SINH VIEN THU %d:", i+1);
			scanf("%d", &a[i]);
	}while(a[i]<=0 || a[i]>=10); 
}

void Display(int x[NMAX],int n)
{
	int i;
	printf("\n|%7s|%7s|","STT","DIEM");
	for(i=1; i<=n;i++)
		printf("\n|%7d|%7d|",i, x[i-1]);
}

int Max(int x[NMAX], int n)
{
	int i;
	float max;
	max = x[0];
	for(i=1; i<n;i++)
		if(x[i] > max)
			max = x[i];
			max_i = i+1;
	return max;
	
}

int Min(int x[NMAX], int n)
{
	int i;
	float min;
	min = x[0];
	for(i=1; i<n;i++)
		if(x[i] < min)
			min = x[i];
			min_i = i+1;
	return min;
	
}


