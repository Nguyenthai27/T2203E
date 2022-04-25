#include<stdio.h>
int main(){
int n,i,temp;
	
	int max=0;
	do{
		printf("nhap vao so nguyen duong n:");
		scanf("%d",&n);
		
	}while(n<0&&printf("\n so nguyen duong phai lon hon hoac bang 0"));

if(n==0)
	 max=0;
	do{
			 i = n%10;
			if(i>max){
				max=i;
			}
	}while(n/=10);
	printf("chu so lon nhat trong %d la:%d\n",temp,max);
}




