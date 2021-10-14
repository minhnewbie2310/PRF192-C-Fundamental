#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int BinToDec(long long binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
    }
    
long long Dec2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int main()
{
	long long binaryNumber;
    printf("\nNhap so nhi phan: ");
    scanf("%lli", &binaryNumber);
    printf("Dec = %d", BinToDec(binaryNumber));
    
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%lli", &decimalNumber);
    printf("Bin = %lli", Dec2Bin(decimalNumber));
	return 0;
}

