#include <stdio.h>
int main() {
	int n;
	printf("nhap chuoi :");
	scanf("%c",&n);
   char s[n];     
   int i = 0;
   int nguyenam = 0;           
   int phuam = 0;        
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         nguyenam++;
      else
         phuam++;
   }
   printf("Chuoi %c co chua: %d nguyen am va %d phu am.",s,nguyenam,phuam);
}
