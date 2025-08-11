// SAYI YER DEÐÝÞTÝRME
// A ve B deðiþkenlerine iki tamsayýyý girdi olarak alan ve yerini deðiþtiren bir C programý yazýnýz.
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
