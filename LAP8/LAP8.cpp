#include<stdio.h>
#include<math.h>
// tinh tong so chu cua 1 so nguyen n
int tongSoChu(int n){
int s=0;
for(int i;n!=0;){
i=n%10;
s=s+i;
n/=10;
}
return s;	
}

// tinh chu vi tam giac
int chuVi(int a,int b,int c){
	int ChuVi=a+b+c;
 	return ChuVi;
}

//tinh dien tich tam giac
int dienTich(int a,int b,int c){
	int  p = (a +b+ c) / 2;
	int d= sqrt(p*(p - a)*(p - b)*(p - c));	
	return d;
}




