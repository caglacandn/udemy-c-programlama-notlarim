#include<stdio.h>
// void: geriye de�er d�nd�rmeyen fonksiyonlarda kullan�l�r.
// fonksiyon geriye de�er d�nd�rseydi void yerine int yazabiliriz.
// fonksiyon int oldu�unda bir �eyi return etmesi gerekmekte


/*
   D�n��_tipi fonksiyonun_ad�(tip1 parametre1, tip2 parametre2,...)/* Ba�l�k */
//fonksiyon parametre almak zorunda de�il, fonksiyon bir �ey d�nd�rmeyecekse d�n�� tipi void al�n�r.
//{
//fonksiyon i�i i�lemler
// return expression; /*tercihe ba�l�*/
//}    */






/*
// fonksiyonun void olarak tan�mlanmas�
void tekmiciftmi(int a){
	if((a%2)==0){
		printf("sayi cift sayidir.");
	}
	else{
		printf("sayi tek sayidir.");
	}
}
int main(){
	
	int sayi;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	tekmiciftmi(sayi);
	
	
	return 0;
}                                          */


// fonksiyonu int olarak tan�mlanmas�
int tekmiciftmi(int a){
	if((a%2)==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	
	int sayi,sonuc;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	sonuc=tekmiciftmi(sayi);
	if(sonuc==1){
		printf("sayi cift sayidir.");
	}
	if(sonuc==0){
		printf("sayi tek sayidir.");
	}
	return 0;
}
