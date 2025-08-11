/*
Asagidaki verilen yapiyi kullanarak ogrenci numarasi 2019 oldugunda asagidaki verilen 
bilgilerin tutulmasini ve ekrana gosterilmesini saglayan C programini yaziniz.

Bilgi
Ad: Can
Soyad: Boz
No: 2019
Sinif: 5

Yapi: 

typedef struct ogrenci{
	char ad[20];
	char soyad[20];
	int no;
	int sinif;
};
*/
#include<stdio.h>
#include<string.h>
typedef struct ogrenci{
	char ad[20];
	char soyad[20];
	int no;
	int sinif;
};

int main(){
	
	struct ogrenci ogr;
	printf("Lutfen ogrenci numarasini giriniz:\n");
	scanf("%d",&ogr.no);
	
	if(ogr.no==2019)
	{
		ogr.no=2019;
		strcpy(ogr.ad,"Can");
		strcpy(ogr.soyad,"Boz");
		ogr.sinif=5;
		
		printf("\nNo: %d",ogr.no);
		printf("\nAdi: %s",ogr.ad);
		printf("\nSoyad: %s",ogr.soyad);
		printf("\nSinifi: %d", ogr.sinif);	
	}
	
	
	return 0;
}
