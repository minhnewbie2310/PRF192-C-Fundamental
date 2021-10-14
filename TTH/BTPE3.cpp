#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int N,i;
	int m=0;
	printf("\nNhap so N: ");
	scanf("%d", &N);
	
	int s=0;
	while(s<N){
		m++;
		s=s+m;
	}
	m--;
	printf("\nSo nguyen duong m la %d", m);
	return 0;
}

