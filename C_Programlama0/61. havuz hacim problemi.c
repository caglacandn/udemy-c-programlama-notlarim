#include <stdio.h>
// bir havuzun; enini, boyunu ve y�ksekli�ini alan dolmas� i�in ne kadar su almas� gererkti�ini yazan C program� yaz�n

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
	printf("Havuzun tamamen dolmasi icin gereken su miktar�: %.4f litre\n",gereken_su);
	
	
	return 0;
}
