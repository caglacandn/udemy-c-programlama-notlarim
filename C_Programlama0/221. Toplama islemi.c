/*
Klavyeden girilen bir N pozitif tamsayisinia kadar olan sayilarin toplanarak
sonucunun ekrana gosterilmesini saglayan C programini recursive fonksiyon yardimiyla yaziniz.
*/

#include <stdio.h>

int topla(int sayi)
{
	if(sayi == 1)
	{
		return 1;
	}
	else 
	{
		return sayi+topla(sayi-1);
	}
	
}

int main()
{
	int n;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	printf("Toplam sonucu = %d", topla(n));

	return 0;
}
