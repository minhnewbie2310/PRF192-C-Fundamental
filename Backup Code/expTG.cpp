#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
void swap(int *a, int *b);
main()
{
	int x=5, y=10;
	swap(&x,&y);
	printf("\nSAU KHI HOAN DOI X=%d, Y=%d", x, y);
}

void swap(int *a, int *b)
{
	int tg;
	tg = *a;
	*a = *b;
	*b = tg;
	
	printf("\nTRONG HAM, SAU HOAN DOI X=%d, Y=%d",*a,*b);
}
