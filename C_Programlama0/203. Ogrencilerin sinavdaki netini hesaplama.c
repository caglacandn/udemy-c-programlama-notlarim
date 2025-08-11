/*
Bir ogretmen 30 kisilik sinifa 10 soruluk coktan secmeli sorulardan olusan bir sinav vermistir.
Bu sinavda her sorunun 4 sikki (A B C D) bulunmakta ve 4 yanlis bir dogruyu goturmektedir. Bu programda 
bir ogrencinin okul numarasini ve cevaplarini iceren bir yapi tanimlayiniz ve sinifta bulunan her ogrencinin 
okul numarasini ve cevaplarini bu yapi dizisine okkutunuz. Daha sonra ogretmenin hazirladigi cevap anahtarini 
bir karakter dizisine okuyunuz ve her ogrencinin 10 uzerinden aldigi notu hesaplayibiz. Her ogrencinin okul numarasi
ile, hesaplanan sinav sonucunu bir baska yapi dizisinde tutunuz ve sonuclari ekranada goruntuleyiniz.
*/
//ATLADIN BU SORUYU KOD HATALIIIIy
#include<stdio.h>
#define ogrenci_sayisi 1
#define sinav_soru_sayisi 5
struct ogrenciTip{
	int no;
	char cevap[sinav_soru_sayisi];
};

struct sonucTip{
	int no;
	float puan;
};

int main()
{
	int i,j,k;
	int dogru[ogrenci_sayisi]={0},yanlis[ogrenci_sayisi]={0};
	char cevap_anahtari[sinav_soru_sayisi];
	struct ogrenciTip ogrenci[ogrenci_sayisi];
	struct sonucTip sonuc[ogrenci_sayisi];
	
	printf("Lutfen sinavin cevap anahtarini giriniz:\n");
	
	for(i=0; i<sinav_soru_sayisi; i++)
	{
		printf("%d. sorunun cevabi:",i+1);
		scanf("%s", &cevap_anahtari[i]);
		if(cevap_anahtari[i] != 'A' && cevap_anahtari[i] != 'B' && cevap_anahtari[i] != 'C' && cevap_anahtari[i] != 'D' )
		{
			printf("Lutfen A B C D siklarindan birini giriniz.\n");
			i--;
		}
	}
	
	printf("\nOgrenci bilgilerini giriniz:\n");
	for(i=0; i<ogrenci_sayisi; i++)
	{
		printf("\n%d. ogencinin numarasi: ",i+1);
		scanf("%d", &ogrenci[i].no);
		
		printf("\n%d numalari ogrencinin cevaplarini giriniz:\n",ogrenci[i].no);
		for (j=0; j<sinav_soru_sayisi;j++)
		{
			printf("%d. soru: ",j+1);
			scanf("%s", ogrenci[i].cevap[j]);
			
		}
		for(k=0; k<sinav_soru_sayisi; k++)
		{
			if(cevap_anahtari[k] == ogrenci[i].cevap[k])
			{
				dogru[i]++;
			}
			else
			{
				yanlis[i]++;
			}
		}
		sonuc[i].no=ogrenci[i].no;
		sonuc[i].puan = (float)dogru[i]-(float)(yanlis[i]/4.0);
		
		
	}
	for (i=0; i<ogrenci_sayisi; i++)
	{
		printf("Dogru: %d\nYanlis: %d\n",dogru[i],yanlis[i]);
		printf("\n%d numarali ogrencinin notu(her soru 1 puan ve 1 yanlis 0.25 dogruyu goturuyor.): %f", sonuc[i].no, sonuc[i].puan);	
	}
	
	return 0;
}
