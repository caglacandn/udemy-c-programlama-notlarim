//Ortalama h�z sorusu
//bir araban�n ankaradan istanbula(450km) var�� zaman�n� saat cinsinden girdi olarak alan ve araban�n ortalama h�z�n� hesaplayan C program�n� yaz�n�z.
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
