#include <stdio.h>
#include <string.h>
//strncmp fonksiyonu: belli bi say�da karakteri k�yaslama yapar hangisi b�y�kse 1 de�erini d�nd�r�r
int main(){
	
	int sonuc;
	char dizi1[15]="abcdef";
	char dizi2[15]="ABCDEF";
	//ASCI kodunda k���k a daha b�y�k
	sonuc = strncmp(dizi1,dizi2,4); 			//ilk 4 karakteri k�yaslar
	printf("strncmp sonucu: %d\n", sonuc); //1 yazd�r�r : dizi1 > dizi2 demektir.
	
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
