#include <stdio.h>
// bir havuzun; enini, boyunu ve yüksekliðini alan dolmasý için ne kadar su almasý gererktiðini yazan C programý yazýn

int main(){
	float en, boy, yukseklik;
	printf("havuzun enini giriniz: ");
	scanf("%f",&en);
	printf("havuzun boyunu giriniz: ");
	scanf("%f",&boy);
	printf("havuzun yukseklik giriniz: ");
	scanf("%f",&yukseklik);
	float su;
	printf("havuzda bulunan su miktarini litre cinsinden giriniz: ");
	scanf("%f", &su);
	
	float havuz_hacmi = en*boy*yukseklik;
	float gereken_su = havuz_hacmi - su;
	
	printf("\nHavuzun hacmi: %.4f metrekup\n", havuz_hacmi);
	printf("Havuzun tamamen dolmasi icin gereken su miktarý: %.4f litre\n",gereken_su);
	
	
	return 0;
}
