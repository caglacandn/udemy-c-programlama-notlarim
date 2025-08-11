#include <stdio.h>
// çok boyutlu sayý dizileri

//m[2][1]: 3. sutun 2. satýrdaki elemaný belirtir
/*
çok boyutlu diziyi tanýmarken sonsuz uzunlukta bir matris gibi tanýmlayabiliriz
int matrice[][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };  //burda, ilk matrisin kaç 
eleman içerdiðini yazmak zorunlu deðil fakat ikinci matrisin eleman sayýsýný yazmak zorunlu
*/
int main(){
	
	int dizi[2][2] = { { 4, 6 }, { 2, 3 } };
	
	printf("%d\n",dizi[0][0]); //4 yazdirir
	printf("%d\n",dizi[0][1]); //6 yazdirir
	printf("%d\n",dizi[1][0]); //2 yazdirir
	printf("%d\n",dizi[1][1]); //3 yazdirir
	return 0;
}
