/*
	Chuong trinh su dung mang cau truc de nhap va in thong tin ve sinh vien
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

 
 struct student //D/n ra kieu du lieu moi
 {
 	/*Khai bao cac thanh phan - truong du lieu
	 Moi truong duoc khai bao nhu mot bien thong thuong
	 Kieu student co 4 truong du lieu
	 */	
	 char masv[10];
	 char hten[30];
	 int namsinh;  
	 float diem;
 };
 main()
 {
 	struct student st[20]; //Khai bao mang student
 	int i, n;
 	char ma[10];
 	printf("\nNHAP SO SINH VIEN:");
 	scanf("%d", &n);
 	
 	
 	//Nhap du lieu cho cac sinh vien
 	for(i=0;i<n;i++)
 	{
		printf("\nMA SINH VIEN %d:", i+1);
		fflush(stdin);
	 	gets(st[i].masv); //Chu y: masv la ten truong trong kieu cau truc
	 	printf("\nHO TEN SINH VIEN %d:", i+1);
	 	fflush(stdin);
	 	gets(st[i].hten);
	 	
	 	 
	 	printf("\nNAM SINH CHO SINH VIEN %d:", i+1);
	 	fflush(stdin); 
	 	scanf("%d", &st[i].namsinh);
	 	 
	 	printf("\nDIEM THI SINH VIEN %d:", i+1);
		fflush(stdin);
	 	scanf("%f", &st[i].diem);
 	
	 }
 	

 	printf("\nTHONG TIN SINH VIEN\n");
 	printf("\nSTT  |MA SV   |HO TEN        |NAM SINH|DIEM");
 	for(i=0; i<n;i++)
 	{
	 printf("\n%5d|%s|%s|%4d    |%.1f",i+1, st[i].masv, st[i].hten, st[i].namsinh, st[i].diem);
	 
	}
 	
 	printf("\nNHAP MA SINH VIEN CAN TIM: ");
 	fflush(stdin);
 	gets(ma);
 	for(int i=0;i<n;i++){
 		if(strcmp(st[i].masv,ma)==0){
 			printf("\nMA SV: %s\nHO TEN: %s\nNAM SINH: %d\nDIEM: %f", st[i].masv, st[i].hten, st[i].namsinh, st[i].diem);	
		}
	}
 	
 }
