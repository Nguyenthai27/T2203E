#include<stdio.h>
int main(){
int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int min=arr[1];
		for(int i=0;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
		min>0;
		}		
	printf("so duong nho nhat la :%d\n",min);		
}
