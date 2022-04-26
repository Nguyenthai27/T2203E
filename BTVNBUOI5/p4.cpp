#include<stdio.h>
int xuatLeCuoi(int arr[],int n){
	for(int i=n-1;i<n;i--){
		if(arr[i]%2!=0){
			return arr[i];
			break;
		}
	}
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}	
	for(int i=0;i<n;i++){
	printf("le cuoi:%d\n",xuatLeCuoi(arr,n));
	}
}

		
