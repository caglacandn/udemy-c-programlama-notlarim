/*
Kullan�c�dan ald��� tam say� kenar uzunluklar� (a,b) ve y�ksekklik (h) bilgisini kullanarak bir dikd�rtgen prizman�n s�ras�yla
taban alan�n�, yanal alanlar�n�n toplam�n�, toplam alan�n� ve hacmini ekrana bast�ran program�n C kodunu yaz�n�z.  */

#include<stdio.h>
int main(){
	int a, b, h;
	printf(" Dikdortgen prizmanin a, b ve h uzunluklarini giriniz: ");
	scanf("%d%d%d", &a, &b, &h);
	int taban_alan, yanal_alan, toplam_alan, hacim;
	taban_alan = a*b;
	yanal_alan = 2*(a*h)+2*(b*h);
	toplam_alan = 2*taban_alan + yanal_alan;
	hacim = taban_alan*h;
	
	puts("\n\tDikdortgen prizmanin: ");
	printf("\t\tTaban alani: %d\n", taban_alan);
	printf("\t\tYanal alanlar toplami: %d\n",	yanal_alan);
	printf("\t\tToplam alani: %d\n", toplam_alan);
	printf("\t\tHacmi: %d\n", hacim);
return 0;	
}
