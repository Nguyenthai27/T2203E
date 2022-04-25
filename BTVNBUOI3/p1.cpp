#include <stdio.h>
int main() {
	int n;
	printf("Nhap n > 0: ");
	scanf("%d", &n);
	if(n <= 0) {
		printf("Nhap n > 0\n");
	}else{
		printf("Cac so le: \n");
		for(int i = 1; i < n; i +=2) {
			printf("%d, ", i);
		}
	}
	

}

