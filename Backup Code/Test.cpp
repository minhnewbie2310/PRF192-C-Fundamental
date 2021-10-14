#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
char bs;
void InputData(char *ch);
int DoiXung(int n);
void LietKe(int l, int u);
main()
{
	char chon;
	while(1)
	{
		system("cls");
		printf("\nCHUONG TRINH KIET KE BIEN SO DEP");
		printf("\n1-NHAP DU LIEU");
		printf("\n2-LIET KE");
		printf("\n3-Thoat");
		printf("\nGO PHIM TUONG UNG: ");
		chon= getch();
		if (chon=='3') break;
		switch(chon)
		{
			case'1':
				InputData(&bs);
				printf("\n%c", bs);
				printf("\nENTER VE MENU");
				getch();
				break;
			case'2':
				printf("\nDANH SACH BIEN DEP\n");
				printf("\nENTER VE MENU");
				getch();
				break;
		}
	}
	return 0;
}

void InputData(char *ch)
{
	printf("\nNhap chu cai: ");
	fflush(stdin);
	scanf("%c", &ch);
}

int DoiXung(int n)
{
	int n1=n;
	int du, a = 0;
	do{
		du = n%10;
		n = n/10;
		a = a*10 + du;
	}while(n!=0);
	
	if(a==n1) return n1;
	else return 0;
}

void LietKe(int l, int u)
{
	int i, dem=0;
	for (i=1;i<=u;i++)
	{
		if(DoiXung(i))
		{
			printf("30%c-%d%3c",bs, i,32);
			dem++;
			if (dem%7==0) printf("\n");
		}
	}
}
