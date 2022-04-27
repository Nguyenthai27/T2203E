#include<stdio.h>
int daoNguoc(int n,int arr[]){
	for(int i=0; i< n/2; i++)
    {
        int j = n - i - 1;
        int tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
    }
	return i;
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d la:%d");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		int x=daoNguoc(arr[],n);
		printf("Mang sau khi dao nguoc la:&d",x);
	}
}
