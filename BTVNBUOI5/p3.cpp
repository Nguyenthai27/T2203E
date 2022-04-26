#include<stdio.h>
int main(){
    int n, x;
    int a[n];
	printf("nhap n:");
	scanf("%d",&n);
    printf("nhap mang\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("nhap phan tu can tim:\n");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
        if(a[i]==x){
    	printf("phan tu duoc tim thay: %d\n");
    	}
}
