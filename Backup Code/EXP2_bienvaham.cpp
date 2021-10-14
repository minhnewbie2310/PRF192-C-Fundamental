#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#
int a, b, c;
void InputData();
void GPT();
main()
{
	char chon;
	while(1)
	{
		printf("\nGIAI PHUONG TRINH BAC 2 MOT AN");
		printf("\n1-NHAP CAC HE SO");
		printf("\n2-GIAI PHUONG TRINH");
		printf("\n1|0 - THOAT");
		printf("\nBAM 1 HOAC 0 DE THUC HIEN CHUC NANG:");
		chon= getch();
		if(chon==1 || chon==0) break;
		switch(chon)
		{
			case'1':
				InputData();
				printf("\nNHAP XONG HE SO, ENTER DE VE MENU");
				getch();
				break;
			case'2':
				break;
		}
	}
}

void InputData()
{
	printf()
