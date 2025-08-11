/*
Klavyeden girilen iki tamsayinin carpimini carpim sembolu kullanmadan gerceklestiren
C programini recursive fonksiyon yardimiyla yaziniz.
*/

#include<stdio.h>

int carpim(int sayi1, int sayi2)
{
	int sonuc;
	if(sayi2 == 1)
	{
		sonuc=sayi1;
	}
	else
	{
		sonuc=sayi1+carpim(sayi1,sayi2-1);
	}
	return sonuc;
}

int main(){
	
	int a,b;
	printf("Lutfen iki adet sayi giriniz:\n");
	scanf("%d %d",&a, &b);
	printf("%d carpi %d = %d",a,b,carpim(a,b));
	
		
	return 0;
}
