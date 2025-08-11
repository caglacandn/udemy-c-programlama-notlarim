#include<stdio.h>
/*
Kullanici tarafindan n pozitif tamsayisinin faktoriyelini hesaplamasini saglayan fonksiyon prototipi
asagida verilmistir. Buna gore asagidaki prototipi kullanarak C programini yaziniz.
int faktoriyel(int *sayi)
*/

int faktoriyel(int *sayi)
{
	int sonuc = 1;
	int i;
	for(i=*sayi; i>=1; i--)
	{
		sonuc *= (*sayi) ;  //sonuc=sonuc*(*sayi);
		(*sayi)--;
	}
	return sonuc;
}

int main()
{
	int n;
	printf("Lutfen faktoriyeli alinacak sayiyi giriniz: ");
	scanf(" %d",&n);
	int orijinal_sayim = n; //fonksiyona n yi adresi ile gonderdigimiz icin ve fonksiyonda n yi azaltigimiz icin n 0 olarak bastirilir. bu yüzden sayiyi baska bir degiskene atiyoruz.
	printf("%d! = %d", orijinal_sayim, faktoriyel(&n));
	return 0;
}
