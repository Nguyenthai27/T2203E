#include<stdio.h>		
int main()
{
	int a[1000];
 	int n;
	printf("nhap phan tu mang ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	int dem;
	for(int i=0;i<n;i++)
		if(a[i]%2!=0) 
		{	tong+=a[i];
		dem++;
		}
	printf("tong trung binh cong so le la %d  ",tong/dem);	
}
