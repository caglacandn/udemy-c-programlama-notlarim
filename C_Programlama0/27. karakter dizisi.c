#include <stdio.h>
//karakter dizileri
int main(){
	//birinci tan�mlama �ekli
	char dizi[]={'c', 'a', 'n', 'd', 'a', 'n', '\0' }; // tek t�rnak kullanmay� unutma  **** \0 eklemek zorundas�n b�yle  tan�ml�yorsan
	//ikinci tan�mlama �ekli
	char dizi2[]="cagla"; // haf�zada sonuna \0 olarak tutulur
	// karakter dizileri stringtir %s
	printf("%s %s\n\n",dizi2, dizi);
	
	char kullanici[40];  //scanfle alacaksan max karakter say�s�n� girmelisin
	printf("lutfen bir karakter dizisi giriniz: ");  // bo�lu�a kadar al�yor
	scanf("%s",&kullanici);
	printf("%s", kullanici);
	return 0;
	
	//karakter dizilerinde kullan�lan fonksiyonlar : #include<string.h>  k�t�phanesi kullan�l�yor
}
