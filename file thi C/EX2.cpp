#include<stdio.h>
void reverse(int* arr, int size)
{    
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main(){
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
		for(int i=0;i<n;i++){
		printf("Dao nguoc cua mang la: %d\n",arr[i]);
		}
		
}



