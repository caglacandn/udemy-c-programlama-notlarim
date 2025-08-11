#include<stdio.h>
#include<string.h> //strcpyi kullanmak icin

struct ogrenci_bilgi{
	int no;
	char ad[20];
	char soyad[20];
	int yas;
};
int main(){
	
	struct ogrenci_bilgi ogrenci1,ogrenci2;
	ogrenci1.no=279;
	strcpy(ogrenci1.ad,"Cagla"); // ÖNEMLI!!! char ifadeyi structa stcpy ile atama yapabiliyorsun
	strcpy(ogrenci1.soyad,"Candan");
	ogrenci1.yas=19;
	
	ogrenci2=ogrenci1; //ogrenci1'in bilgileri ogrenci2'ye atanir
	printf("%d %s %s %d",ogrenci2.no,ogrenci2.ad,ogrenci2.soyad,ogrenci2.yas);
	return 0;
}
