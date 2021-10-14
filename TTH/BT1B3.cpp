#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int main()
{
	int i,n;
	printf("\nEnter n: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++){
		if(n%i==0 && i%2==1){
			printf("%d ", i);
		}
	}
	printf("la uoc so le cua %d", n); 
	return 0;
}

