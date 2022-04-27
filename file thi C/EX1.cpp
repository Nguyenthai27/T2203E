#include<stdio.h>
int main()
{
	int i, n;
	float S;
	S = 0;
	do
	{
		printf("Nhap n:\n ");
		scanf("%d", &n);
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
		}
	}while(n < 1);
	for(int i=1;i<=n;i++){
		S=S+1.0/i;
	}
	printf("\nS = %f", S);
	printf("\nTong 1 + 1/2 + ... + 1/%d la: %.2f ",n, S);
}
