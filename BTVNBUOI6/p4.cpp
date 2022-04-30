#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int a = arr[0];
	int b = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]> b){
			b = arr[i];
		}
		if(arr[i] < a){
			a = arr[i];
		}
	}
	int a1 = a <0?-a:a;
	int b1 = b<0?-b:b;
	if(a1>b1){
		printf("Doan can tim [%d,%d]",-a1,a1);
	}else{
		printf("Doan can tim [%d,%d]",-b1,b1);
	}

}
