/*
1- Galerici sahibi icin araba adli bir yapi tipi tanimlayiniz. Bu yapidaki ilk eleman
arabanin satilip satilmadigini tutmalidir. Eger araba satildiysa 1 degerini, satilmadiysa
0 degerini alacaktir. Ikinci eleman ise birlesim tipinde tanimlanmasi ve eger araba satildiysa
satis degeri, satilmadiysa arabanin markasi tutulmalidir.
2- araba_A degiskenini araba yapi tipinde tanimlayiniz.
3- araba_A degiskenine satilmamis olan"Anadol" marka arabanin bilgilerini atayiniz.
4- "Anadol" marka araba 20000 tl'ye satilinca araba_A degiskeninde gereken 
guncellemeleri yapiniz.
*/
#include<stdio.h>
#include<string.h>
//bos egzersiz.
struct araba{
	
	int satis;
	
	union{
		double fiyat;
		char marka[20];
	}bilgi;
		
};

int main()
{
	struct araba araba_A;
	
	araba_A.satis =0;
	strcpy(araba_A.bilgi.marka, "Anadol");
	
	araba_A.satis=1;
	araba_A.bilgi.fiyat=20000;
	return 0;
}
