#include<stdio.h>
// void: geriye deðer döndürmeyen fonksiyonlarda kullanýlýr.
// fonksiyon geriye deðer döndürseydi void yerine int yazabiliriz.
// fonksiyon int olduðunda bir þeyi return etmesi gerekmekte


/*
   Dönüþ_tipi fonksiyonun_adý(tip1 parametre1, tip2 parametre2,...)/* Baþlýk */
//fonksiyon parametre almak zorunda deðil, fonksiyon bir þey döndürmeyecekse dönüþ tipi void alýnýr.
//{
//fonksiyon içi iþlemler
// return expression; /*tercihe baðlý*/
//}    */






/*
// fonksiyonun void olarak tanýmlanmasý
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


// fonksiyonu int olarak tanýmlanmasý
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
