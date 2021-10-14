#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int x;
	printf("\nCHUONG TRINH DICH CAC THU TRONG TUAN RA TIENG ANH");
	printf("\nNHAP THU TRONG TUAN CAN DICH: ");
	scanf("%d", &x);
	if(x<2 || x>8){
		printf("\nARE YOU SURE ABOUT THAT ????");
	}else{
		printf("\nDAY LA ");
		switch(x){
			case 2:
				printf("THU HAI");
				break;
			case 3:
				printf("THU BA");
				break;
			case 4:
				printf("THU TU");
				break;
			case 5:
				printf("THU NAM");
				break;
			case 6:
				printf("THU SAU");
				break;
			case 7:
				printf("THU BAY");
				break;
			case 8:
				printf("CHU NHAT");
				break;					
		}
	}
	return 0;
}

