#include <stdio.h>
#include <string.h>
//strncmp fonksiyonu: belli bi sayýda karakteri kýyaslama yapar hangisi büyükse 1 deðerini döndürür
int main(){
	
	int sonuc;
	char dizi1[15]="abcdef";
	char dizi2[15]="ABCDEF";
	//ASCI kodunda küçük a daha büyük
	sonuc = strncmp(dizi1,dizi2,4); 			//ilk 4 karakteri kýyaslar
	printf("strncmp sonucu: %d\n", sonuc); //1 yazdýrýr : dizi1 > dizi2 demektir.
	
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
