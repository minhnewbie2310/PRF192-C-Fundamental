#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int n,i;
int check(int n);
int check(int n){
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return 1;
    else return 0;
}
int main()
{
	int n=1,count=0;
    while(count<3){
    	if(check(n)==1){
    		printf("%d ", n);
    		count++;
		}
		n++;
	}
		printf(" la so hoan hao");
			
    return 0;
	
}

