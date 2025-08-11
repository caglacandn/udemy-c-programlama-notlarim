//Ortalama hýz sorusu
//bir arabanýn ankaradan istanbula(450km) varýþ zamanýný saat cinsinden girdi olarak alan ve arabanýn ortalama hýzýný hesaplayan C programýný yazýnýz.
#include<stdio.h>
#define ankara_istanbul_mesafe 450
int main(){
	float saat;
	printf("Ankara'dan Istanbul'a varis surenizi saat cinsinden yaziniz: ");
	scanf("%f",&saat);
	float ortalama_hiz = ankara_istanbul_mesafe / saat ;
	printf("Ortalama hiziniz: %.2f km/h",ortalama_hiz);
	return 0;
}
