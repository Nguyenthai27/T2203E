#include<stdio.h>
int main()
{
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int c = 0;
	int i=2;
	while(i<=n/2){
		if(n%i==0){	
		c++;
		    }
	        i++;
		}
	
		if(c==0){
		printf("%d la snt",n);
		}else{
		printf("%d ko phai la snt",n);
		}
		}
		
		
		
	
	
