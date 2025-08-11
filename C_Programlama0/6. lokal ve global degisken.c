#include <stdio.h>
// lokal degisken: Yerel deðiþkenlerin kapsamý sadece o bloða aittir.
//				   Bu deðiþkenler genellikle bir fonksiyonun içinde iþlevi vardýr ve diðer fonksiyonlar tarafýnda eriþilemez.

// Global degisken: Global deðiþkenlerin kapsamý program boyuncadýr. Bu deðiþkenlere programýn herhangi bir yerinde ulaþýlabilir.
// 					Bu deðiþken main fonksiyonu dýþýnda (main ve diðer alt fonksiyonlar dýþýnda) tanýmlanýr.
//                  Böylece, bu deðiþken iþlevi diðer alt fonksiyonlar tarafýndan da eriþileibilir ve kullanýlabilir.


int main(){
	
	int x=1;
	
	{ //parantezlerin içine yazýlan sadece parantezin içinde geçerli
	int x=2;
	printf("x=%d\n",x);
	}
	
	// bunun gibi bir kodda ayni isimli deðiþkenlerden lokal olanýnýn deðeri basýlýr.
	
	return 0;
}
