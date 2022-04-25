#include<stdio.h>
int tong(int n){
	int t=0;
	do{
		t=t+n%10;
		n=n/10;
		
	}while(n>0);
	return t;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	printf("tong cac chu so la: %d",tong(n));
}
