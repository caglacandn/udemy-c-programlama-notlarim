/*
Asagidaki verilen yapi kullanilarak N adet ogrencinin ders notlari bilgisini ve ortalamasini hesaplayarak dersler.txt 
dosyasina yazan C programini yaziniz.

Vize1: %20
Vize2: %20
Final: %60

struct ogrenci 
{
	char adsoyad[30];
	char ders[20];
	int vize1, vize2, final;
}
*/
#include<stdio.h>
#include<stdlib.h>

struct ogrenci 
{
	char adsoyad[30];
	char ders[20];
	int vize1, vize2, final;
};


int main()
{
	int N,i;
	float ort = 0.0;
	FILE *dosya;
	printf("Lutfen ogrenci sayisini giriniz: ");
	scanf("%d", &N);
	struct ogrenci ogr[N];
	
	dosya = fopen("dersler.txt", "w");
	
	if(dosya==NULL)
	{
		printf("Dosya olusturulamadi.");
	}
	else
	{
		for(i=0; i<N; i++)
		{
			fflush(stdin);//hatasiz deger almayi sagliyor
			printf("Adi Soyadi: ");
			gets(ogr[i].adsoyad);
			printf("Derin adi: ");
			gets(ogr[i].ders);
			printf("Vize 1 notu: ");
			scanf("%d", &ogr[i].vize1);
			printf("Vize 2 notu: ");
			scanf("%d", &ogr[i].vize2);
			printf("Final notu: ");
			scanf("%d", &ogr[i].final);
			ort = (float)ogr[i].vize1*0.2 + (float)ogr[i].vize2*0.2 + (float)ogr[i].final*0.6;
			fprintf(dosya, "%s\t\t%s\t%d\t%d\t%d\t%.2f\n",ogr[i].adsoyad, ogr[i].ders, ogr[i].vize1, ogr[i].vize2, ogr[i].final, ort);	
		}
		fclose(dosya);
	}
	
	return 0;
}
