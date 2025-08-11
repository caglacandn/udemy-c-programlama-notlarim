/*
Kullanici tarafindan baslangic ve bitis zamanlari saat, dakika ve saniye seklinde girilmektedir.
Buna gore asagida kullanilan yapi ve fonksiyon kullanilarak iki zaman dilimi arasindaki farki
hesaplayan C programini yaziniz.

struct zaman{
	int saniye;
	int dakika;
	int saat;
};

void fark(struct zaman t1, struct zaman t2, struct zaman *farki);
*/



#include<stdio.h>

struct zaman{
	int saniye;
	int dakika;
	int saat;
};

void fark(struct zaman t1, struct zaman t2, struct zaman *farki)
{
	if(t2.saniye > t1.saniye)
	{
		--t1.dakika;
		t1.saniye += 60;
	}
	farki->saniye = t1.saniye-t2.saniye;
	
	if(t2.dakika > t1.dakika)
	{
		--t1.saat;
		t1.dakika += 60;
	}
	farki->dakika = t1.dakika-t2.dakika;
	
	farki->saat = t1.saat - t2.saat;
}

int main(){
	
	struct zaman t1, t2, frk;
	
	printf("Baslangic zamani (saat, dakika, saniye):\n");
	scanf("%d %d %d", &t1.saat,&t1.dakika,&t1.saniye);
	
	printf("Bitis zamani (saat, dakika, saniye):\n");
	scanf("%d %d %d", &t2.saat,&t2.dakika,&t2.saniye);
	
	fark(t1, t2, &frk);

	printf("\nZaman farki: %d saat %d dakika %d saniye",frk.saat,frk.dakika,frk.saniye);

	return 0;
}
