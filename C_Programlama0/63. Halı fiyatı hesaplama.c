//Halý Fiyatý Hesaplama
//halý metrekaresi = 40 tl. Halý döþemek için 200tl iþçilik parasý ödeniyr. metrekareyi girdi olarak al. Toplam tutarý hesapla
#include<stdio.h>
#define iscilik 200
#define metrekare 40
int main(){
	
	float en, boy;
	printf("Hali dosenecek alanin,\n");
	printf("\tEni: ");
	scanf("%f", &en);
	printf("\tBoyu: ");
	scanf("%f", &boy);
	printf("\nBilgilendirme: Halinin metrekaresi 40 TL ve iscilik fiyati 200 TL'dir!\n");
	float toplam_tutar= (en*boy)*metrekare + iscilik;
	printf("\niscilik fiyati dahil odenmesi gereken tutar: %.2f", toplam_tutar);
	
	return 0;
}
