// SAYI YER DE���T�RME
// A ve B de�i�kenlerine iki tamsay�y� girdi olarak alan ve yerini de�i�tiren bir C program� yaz�n�z.
#include <stdio.h>
int main(){
	int a,b,c;
	printf("A sayisini giriniz: ");
	scanf("%d",&a);
	printf("B sayisini giriniz: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\nA sayisini degeri:%d \n",a);
	printf("B sayisini degeri:%d \n",b);
	return 0;
}
