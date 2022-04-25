#include<stdio.h>
#include "func2.h"
int main(){
	int a,b,c;
	printf("nhap a");
	scanf("%d",&a);
	printf("nhap b");
	scanf("%d",&b);
	printf("nhap c");
	scanf("%d",&c);
	int i=(chuVi(a,b,c));
	printf("chu vi tam giac:%d",i);
}
