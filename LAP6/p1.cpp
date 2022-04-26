#include<stdio.h>
int main(){
	int n;
	printf("nhap N:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				while(arr[i]==arr[j]){
					printf("nhap lai gia tri a[%d]");
					scanf("%d",&arr[i]);
			}
				}
		}
			for(int i=0;i<n;i++){
			printf("%d",arr[i]);
			}

}
	


