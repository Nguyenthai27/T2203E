#include<stdio.h>

void menu(){
printf("  TINH TOAN  \n");
printf("==========\n");
printf("1.Nhap so\n");
printf("2.Tinh tong\n");
printf("3.Tinh hieu\n");
printf("4.Tinh tich\n");
printf("5.Tinh thuong\n");
printf("6.Thoat\n");
printf("==========\n");
printf("vui long chon chuc nang");
}
int tinhTong(int a,int b){
return a+b;
}
int tinhHieu(int a,int b){
return a-b;
}
int tinhTich(int a, int b){
return a*b;
}
double tinhThuong(int a,int b){
return b!=0?(double)a/b:NULL;
}
int main()
{
int m,a,b;
do{
	menu();
	scanf("%d",&m);
		switch(m){
case 1:
		printf("nhap so thu nhat");
		scanf("%d",&a);
		printf("nhap so thu 2");	
		scanf("%d",&b);
		break;
case 2:
printf("tong:%d",tinhTong(a,b));
	
case 3:
printf("hieu:%d",tinhHieu(a,b));
	
	
case 4:
	printf("tich:%d",tinhTich(a,b));
	
	case 5:
	double c= tinhThuong(a,b);
	if(c==NULL){
	printf("Khong the chia cho 0\n");
	}else{
		printf("thuong : %lf\n",c);
	}
	}
}while(m!=6);
}




