#include<stdio.h>
	int UCLN(int a,int b){
		while(a!=b){
			if(a!=b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		return a;
	}
	int BCNN(int a,int b){
		int r=UCLN(a,b);
		return a*b/r;
	}
int main(){
	int a;
	printf("nhap a:");
	scanf("%d",&a);
	int b;
	printf("nhap b:");
	scanf("%d",&b);
	int ucln=UCLN(a,b);
	printf("uoc chung lon nhat la:%d\n",ucln);
	int bcnn=BCNN(a,b);
	printf("boi chung nho nhat la:%d\n",bcnn);
}
