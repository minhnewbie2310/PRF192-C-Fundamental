#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
double tinh(double p,double r,int n){
    return p * pow((1+r),n);
}
int main(){
    double p,r;
    int n;
    printf("Nhap tien von, lai suat, thoi gian gui: ");
    scanf("%lf,%lf,%d",&p,&r,&n);
    for(int i=1;i<=n;i++){
    	
        printf("\nSo tien co duoc la: %lf ",tinh(p,r,i));
    }
    return 0;
}

