#include <stdio.h>
#include <string.h>
// strncpy fonksiyonu: bir dizideki belli say�daki karakteri ba�ka bir diziye atar
int main(){
	
	char dizi1[]="Benim adim Cagla.";
	char dizi2[100]="";   //bo� bir karakter veriliyor hata olmamas� i�in
	
	strncpy(dizi2,dizi1,7);     //dizi1 i dizi2 ye kopyalar    7 karakter atan�r
	
	printf("dizi2'ye atanan: %s",dizi2);
	
	return 0;
}
