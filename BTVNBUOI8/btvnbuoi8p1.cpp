#include<stdio.h>
#include<math.h>
int hamTinh(int x,int y){
	int s=0;
	s=x^y;
	return s;
}
int main(){
	int x;
	printf("nhap x:\n");
	scanf("%d",&x);
	int y;
	printf("nhap y:\n");
	scanf("%d",&y);
	int s=hamTinh(x,y);
	printf("ket qua la :%d",s);
}
