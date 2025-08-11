#include<stdio.h>
/*
2 adet fonksiyon yazin
1. fonksiyon: Girilen sayinin 2nin kati oldugunu gosterir
2. fonksiyon: Girilen sayinin 3un kati oldugunu gosterir
Bu iki fonksiyon kullanarak bir C programi yazin. Bu program
kullanicinin girdigi degerin cift olup olmadigini 3un kati olup olmadigini
6nin kati olup olmadigini belirlesin ve ekrana yazdirsin
Ayni C programini fonksiyonu degiskenin adresiyle cagirip yazin
Ornek program ciktisi asagidaki gibidir.

Bir sayi giriniz: 9
Girdiginiz sayi 3un katidir.

Bir sayi giriniz: 12
Girdiginiz sayi cift sayidir
Girdiginiz sayi 3un katidir.
*/ 

int cift_sayi_kontrol(int n)
{
	if(n%2==0)
		return 1;
	else
		return 0;
}
int ucun_kati_kontrol(int n){
	if(n%3==0)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	if(cift_sayi_kontrol(n)==1){
		printf("Girdiginiz sayi cift sayidir.\n");
	}
	if(ucun_kati_kontrol(n)==1){
		printf("Girdiginiz sayi ucun katidir.\n");
	}
	if(cift_sayi_kontrol(n)==1 && ucun_kati_kontrol(n)==1){
		printf("Girdiginiz sayi alti ile tam bolunur.\n");
	}
	return 0;
}
