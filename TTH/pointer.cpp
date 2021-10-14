#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int a=5;
	printf("dia chi cua bien a : %p", &a);
	int* p;
	p= &a;
	printf("\np = %p", p);
	
	a=10;
	printf("\nGia tri cua a la %d", p);
	
	*p = 50;
	printf("\n%d ",a );
	
	int b=3;
	p= &b;
	printf("\n%d ", *p);
	return 0;
}

