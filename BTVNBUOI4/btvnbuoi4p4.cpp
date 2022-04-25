#include<stdio.h>
int main()
{
    int themang, n, i;

    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    }while(n < 0 && printf("\nLoi: (n >= 0)"));
    themang = n;
    do
    {
      i = themang % 10;
    }while(themang /= 10);
    printf("\nChu so dau tien la %d", i);
    return 0;
}
