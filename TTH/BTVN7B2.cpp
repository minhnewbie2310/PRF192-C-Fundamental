#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int cd, cr, a, b;
	printf("\nNhap chieu dai :");
	scanf("%d", &cd);
	printf("\nNhap chieu rong : ");
	scanf("%d", &cr);
	
	for(a=1;a<=cr;a++)
	{
		for(b=1;b<=cd;b++){
			if (a==cr || b==cd || a==1 || b==1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

