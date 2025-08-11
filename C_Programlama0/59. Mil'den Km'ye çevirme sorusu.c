//Mil sorusu
// bir arabanýn gittiði yolu mili cinsinden girdi olarak alan ve bunu km ye çeviren bir c programý yazýnýz
//1 mil = 1.609 km

#include <stdio.h>
#define mil 1.609  // sabit bir deðer tanýmlama 	pragramda kullanýlan her mil karakterinde 1.609 deðerini tutar
int main(){
	float mil_yol, km_yol;
	printf("Arabanin gittiði yol (mil cinsinden): ");
	scanf("%f", &mil_yol);
	km_yol = mil_yol*mil; 
	printf("Araba %.4f km yol gitmistir.", km_yol);
	
	return 0;
}
