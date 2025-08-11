/*
kullanici tarafindan girilen bir N pozitif tamsayisina kadar olan sayilarin faktoriyellerinin hesaplanmasini saglayan
C programini recursive fonksiyon yardimiyla yaziniz
*/
#include<stdio.h>

int faktoriyel(int sayi)
{
	int sonuc;
	if(sayi!=0)
	{
		sonuc=sayi*faktoriyel(sayi-1);
	}
	else 
	{
		sonuc=1;
	}
	return sonuc;
}

int main()
{
	int n;
	printf("Lutfen bir deger giriniz: ");
	scanf("%d", &n);
	printf("Faktoriyel = %d", faktoriyel(n));
	
	
	
	return 0;
}
