#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int UCLN(int a,int b){
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}

int main(){
    int a,b,ucln;
    printf("Nhap (a,b): ");
    scanf("%d%d",&a,&b);
    ucln = UCLN(a,b);
    printf("UCLN(%d,%d)=%d\n",a,b,ucln);
    return 0;
}

