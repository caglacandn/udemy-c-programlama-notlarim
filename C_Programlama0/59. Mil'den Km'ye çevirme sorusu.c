//Mil sorusu
// bir araban�n gitti�i yolu mili cinsinden girdi olarak alan ve bunu km ye �eviren bir c program� yaz�n�z
//1 mil = 1.609 km

#include <stdio.h>
#define mil 1.609  // sabit bir de�er tan�mlama 	pragramda kullan�lan her mil karakterinde 1.609 de�erini tutar
int main(){
	float mil_yol, km_yol;
	printf("Arabanin gitti�i yol (mil cinsinden): ");
	scanf("%f", &mil_yol);
	km_yol = mil_yol*mil; 
	printf("Araba %.4f km yol gitmistir.", km_yol);
	
	return 0;
}
