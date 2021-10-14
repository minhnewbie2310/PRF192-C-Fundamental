#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void swap(int *a, int *b){
	int temp;
	temp = *a; 
	*a = *b;
	*b= temp;
}
int main()
{
	int x=3,y=5;
	printf("\nx,y trc khi doi cho x= %d, y= %d", x, y);
	swap(&x,&y);
	printf("\nx,y sau khi doi cho x= %d, y= %d", x, y);
	return 0;
}

