#include <stdio.h>
//karakter dizileri
int main(){
	//birinci tanýmlama þekli
	char dizi[]={'c', 'a', 'n', 'd', 'a', 'n', '\0' }; // tek týrnak kullanmayý unutma  **** \0 eklemek zorundasýn böyle  tanýmlýyorsan
	//ikinci tanýmlama þekli
	char dizi2[]="cagla"; // hafýzada sonuna \0 olarak tutulur
	// karakter dizileri stringtir %s
	printf("%s %s\n\n",dizi2, dizi);
	
	char kullanici[40];  //scanfle alacaksan max karakter sayýsýný girmelisin
	printf("lutfen bir karakter dizisi giriniz: ");  // boþluða kadar alýyor
	scanf("%s",&kullanici);
	printf("%s", kullanici);
	return 0;
	
	//karakter dizilerinde kullanýlan fonksiyonlar : #include<string.h>  kütüphanesi kullanýlýyor
}
