#include <stdio.h>
int main () {
float x;
	
	printf("Moi ban nhap diem: ");
	scanf("%f", &x);
	
	if (0<=x && x<5)
		printf("\nLoai Yeu");
	else if (5<=x && x<7)
		printf("\nLoai TB");
	else if (7<=x && x<8)
		printf("\nLoai Kha");
	else if (8<=x && x=10)
		printf("\nLoai Gioi");
	else 
		printf("\nLoi Nhap Du Lieu");

}
	
