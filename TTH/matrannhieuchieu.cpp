#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int matrix [2][3];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("\nEnter matrix [%d][%d]: ", i,j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("Matrix \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}

