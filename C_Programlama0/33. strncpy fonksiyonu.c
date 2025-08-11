#include <stdio.h>
#include <string.h>
// strncpy fonksiyonu: bir dizideki belli sayýdaki karakteri baþka bir diziye atar
int main(){
	
	char dizi1[]="Benim adim Cagla.";
	char dizi2[100]="";   //boþ bir karakter veriliyor hata olmamasý için
	
	strncpy(dizi2,dizi1,7);     //dizi1 i dizi2 ye kopyalar    7 karakter atanýr
	
	printf("dizi2'ye atanan: %s",dizi2);
	
	return 0;
}
