#include<stdio.h>
int main()
{
	int n;
	printf("nhap n:");
	do{
	scanf("%d", &n);
	}while(n < 0 && printf("\nLoi: (n >= 0)"));	
		printf("So dao nguoc cua %d la:", n);
		do {
		printf("%d", n % 10);
		}while(n /= 10);  
		


 }



