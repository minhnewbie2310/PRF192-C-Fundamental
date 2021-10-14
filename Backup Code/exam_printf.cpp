#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
main()
{
    char name1[20];
    char name2[20];
    char name3[20];
    strcpy(name1, "Hung");
    strcpy(name2, "Huong");
    strcpy(name3, "Hoa");
    float d1=7, d2=8.5, d3=9.0;
    
	printf("\n------------------");
	printf("\n|%-10s|%-5s|","Ho Ten","Diem");
	printf("\n------------------");
	printf("\n|%-10s|%-5.1f|",name1,d1);
	printf("\n------------------");
	printf("\n|%-10s|%-5.1f|",name2,d2);
	printf("\n------------------");
	printf("\n|%-10s|%-5.1f|",name3,d3);
	printf("\n------------------");
}
