#include <stdio.h>
// �ok boyutlu say� dizileri

//m[2][1]: 3. sutun 2. sat�rdaki eleman� belirtir
/*
�ok boyutlu diziyi tan�marken sonsuz uzunlukta bir matris gibi tan�mlayabiliriz
int matrice[][3]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };  //burda, ilk matrisin ka� 
eleman i�erdi�ini yazmak zorunlu de�il fakat ikinci matrisin eleman say�s�n� yazmak zorunlu
*/
int main(){
	
	int dizi[2][2] = { { 4, 6 }, { 2, 3 } };
	
	printf("%d\n",dizi[0][0]); //4 yazdirir
	printf("%d\n",dizi[0][1]); //6 yazdirir
	printf("%d\n",dizi[1][0]); //2 yazdirir
	printf("%d\n",dizi[1][1]); //3 yazdirir
	return 0;
}
