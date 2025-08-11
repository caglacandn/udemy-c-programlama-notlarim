#include <stdio.h>
#include <string.h>
//strcmp fonksiyonu: kýyaslama yapar hangisi büyükse 1 deðerini döndürür
int main(){
	
	int sonuc;
	char dizi1[15]="abcdef";
	char dizi2[15]="ABCDEF";
	//ASCI kodunda küçük a daha büyük
	sonuc = strcmp(dizi1,dizi2);
	printf("strcmp sonucu: %d\n", sonuc); //1 yazdýrýr : dizi1 > dizi2 demektir.
	
	if(sonuc<0){ //sonuc -1
		printf("dizi1, dizi2'den daha kucuktur.");
	}
	else if(sonuc>0){ //sonuc 1
		printf("dizi1, dizi2'den daha buyuktur.");
	}
	else { //sonuc 0
		printf("dizi1, dizi2 birbirine esittir.");
	}
	return 0;
}
