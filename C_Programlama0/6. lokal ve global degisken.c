#include <stdio.h>
// lokal degisken: Yerel de�i�kenlerin kapsam� sadece o blo�a aittir.
//				   Bu de�i�kenler genellikle bir fonksiyonun i�inde i�levi vard�r ve di�er fonksiyonlar taraf�nda eri�ilemez.

// Global degisken: Global de�i�kenlerin kapsam� program boyuncad�r. Bu de�i�kenlere program�n herhangi bir yerinde ula��labilir.
// 					Bu de�i�ken main fonksiyonu d���nda (main ve di�er alt fonksiyonlar d���nda) tan�mlan�r.
//                  B�ylece, bu de�i�ken i�levi di�er alt fonksiyonlar taraf�ndan da eri�ileibilir ve kullan�labilir.


int main(){
	
	int x=1;
	
	{ //parantezlerin i�ine yaz�lan sadece parantezin i�inde ge�erli
	int x=2;
	printf("x=%d\n",x);
	}
	
	// bunun gibi bir kodda ayni isimli de�i�kenlerden lokal olan�n�n de�eri bas�l�r.
	
	return 0;
}
