#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	do{
		scanf("%d",&n);
		if(n<=0){
			printf("nhap lai n");
		}
	}while(n<=0);
int uoc=0;
for(int i=1;i<=n;i++){
	if(n%i==0){
		uoc++;
	}
}
printf("uoc cua n:%d\n",uoc);
}

