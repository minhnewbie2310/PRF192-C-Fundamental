#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
main()
{
	int n, i, s1=0, s=1, sum;
	float s2=0;
	{
		printf("\nNHAP SO NGUYEN n: ");
		scanf("%d", &n);
		for (int i=1; i<=n; i++)
		{
			s1+=i;
			s*=i;
		
			s2+=((float)1/i);
		}
		printf("\nTONG TU 1 DEN N: %d", s1);
		printf("\nGIAI THUA N: %d", s);
		printf("\nTONG NGHICH DAO TU 1 DEN N: %.2f", s2);
	}			
}
