#include<stdio.h>
int nhap(int a[], int &n){
    do{
        printf("Nhap n: ");
        scanf("%d",&n);
    }
    while(n<2||n>99);
     
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
 
int xuat(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%5d",a[i]);
    }
}
 

int sapXep1(int a[], int n){
    int Mid;
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                Mid=a[i];
                a[i]=a[j];
                a[j]=Mid;
            }
        }
    printf("\nMang sau khi sap xep:\n");
    xuat(a,n);
}

int sapXep2(int a[], int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<=i;j++){
            if(a[j]>a[i]){
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
         
    printf("\nMang sau khi sap xep tang:\n");
    xuat(a,n);  
}
int main(){
    int a[100];
    int n;
    nhap(a,n);
    sapXep1(a,n);
}
