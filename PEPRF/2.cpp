#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	system("cls");
	int n;
	scanf("%d", &n);
	printf("\nOUTPUT:\n");
	int count=0;
	int sum=0;
	for(int i=n;i>=0;i--){
		if(i%2==0){
			sum+=i;
			count++;
		}
		if(count==3){
			break;
		}
	}
	printf("%d", sum);
	return 0;
}

