#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int row,col;
	
	printf("Nhap so hang cua ma tran: ");
	scanf("%d", &row);
	
	printf("Nhap so cot cua ma tran: ");
	scanf("%d", &col);
	
	int m1[row][col], m2[row][col];
	printf("\nNhap vao m1: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("\nEnter m1[%d][%d]: ", i,j);
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\nNhap vao m2: \n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("\nEnter m2[%d][%d]: ", i,j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	for (int i=0;i<row;i++){
		for (int j=0;j<col;j++){
			printf("%2d ", (m1[i][j]+m2[i][j]));
		}
		printf("\n");
	}
	return 0;
}

