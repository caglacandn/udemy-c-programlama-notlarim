#include <stdio.h>
#include <string.h>
//karakter dizisi egzersiz
//iki adet karakter dizisi oluþturun: birincisi "bonne" ikincisi "soirée" 
//strcpy ve strncpy iki karakter dizisini birleþtirin
//elde ettiðiniz karakter dizisini ekrana bastýrýn
//bonsoiré yazdýrýcaz
int main(){
	
	char dizi1[]="bonne";
	char dizi2[]="soiree";
	char sonuc[100]="";
	
	strcpy(sonuc,dizi1);
	strncpy(sonuc+3,dizi2,5);
	
	printf("%s",sonuc);
	
	return 0;
}
