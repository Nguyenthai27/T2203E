#include<stdio.h>
int timMax(int *p, int n){
int max=0;
	for(int i=0;i<n;i++){
		if(max<p[i]){
	max=p[i];
		}
	}
	return max;
}
int timUCLN(int *p,int n){
	int ucln=1;
	for(int i=2;i<timMax(p,n);i++){
			bool f=true;
		for(int j=0;j<n;j++){
			if(p[j]%i==0){
				f = false;
				break;
			}
		}
		if(f&&i>ucln){
			ucln =i;
		}
	}
	return ucln;
}

int main(){
	int arr[5] = {3,4,2,6,8};
	int ucln = timUCLN(arr,5);
	printf("UCLN la:%d",ucln);
}
