#include<stdio.h>
/*
Kullanici tarafindan saniye olarak girilen bir degerin saat: dakika: saniye(hh: mm: ss) formatinda
donusturulmesini saglayan C programini fonksiyon kullanarak yaziniz.
*/
void zaman_donusturucu(int sn)
{
	int saat, dakika, saniye;
	
	saat=sn/3600;
	dakika=(sn%3600)/60;
	saniye=(sn%3600)%60;
	
	printf("Girmis oldugunuz saniye:\n%d saat: %d dakika: %d saniye", saat,dakika,saniye);		
}

int main(){
	
	int saniye;
	printf("Lutfen donusturulmesini istediginiz saniye degerini giriniz: ");
	scanf("%d",&saniye);
	
	zaman_donusturucu(saniye);
	
	return 0;
}
