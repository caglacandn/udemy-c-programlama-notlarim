#include <stdio.h>
#include <string.h>
//karakter dizisi egzersiz
//iki adet karakter dizisi olu�turun: birincisi "bonne" ikincisi "soir�e" 
//strcpy ve strncpy iki karakter dizisini birle�tirin
//elde etti�iniz karakter dizisini ekrana bast�r�n
//bonsoir� yazd�r�caz
int main(){
	
	char dizi1[]="bonne";
	char dizi2[]="soiree";
	char sonuc[100]="";
	
	strcpy(sonuc,dizi1);
	strncpy(sonuc+3,dizi2,5);
	
	printf("%s",sonuc);
	
	return 0;
}
