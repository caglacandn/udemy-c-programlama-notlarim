//Hal� Fiyat� Hesaplama
//hal� metrekaresi = 40 tl. Hal� d��emek i�in 200tl i��ilik paras� �deniyr. metrekareyi girdi olarak al. Toplam tutar� hesapla
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
