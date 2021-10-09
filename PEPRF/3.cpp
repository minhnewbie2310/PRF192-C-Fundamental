#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	system("cls");
	char a[4];
	for (int i=0;i<4;i++){
		fflush(stdin);
		scanf("%c", &a[i]);
	}
	printf("\nOUTPUT:\n");
	int n=4;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%c", a[i]);
	}
	return 0;
}

