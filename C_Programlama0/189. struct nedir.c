//struct yapisi
#include <stdio.h>
/*
struct: bir tanimlayici altinda birbirinden farkli tiplerde veri saklamamizi saglayan veri tipidir.
bir struct tanimlamak:
	ismi
	icindeki veri listesi ve hepsinin adi ve turu.
*/

int main(){
	
	struct araba{
	int model[25];
	char renk[10];
	int km;
	};
	struct araba galeri;  
	
	
	//bir structi baska bir struct icinde cagirma
	
	struct tarih{
		int gun;
		int ay[10];
		int yil;
	};
	
	struct kimlik{
		char isim[10];
		char soyisim[10];
		struct tarih dogum_tarihi;
	};
	
	//****************************************************
	
	struct tarih{
		int gun;
		int ay[10];
		int yil;
	};
	struct calisan_bilgi{
		int sicil_no;
		char isim[30];
		char adres[50];
		struct tarih ise_giris;
		double maas;
	}calisan; 
	
	return 0;
}
