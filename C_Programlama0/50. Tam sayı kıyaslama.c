/* kullan�c�n�n girdi�i iki tam say�y� k�yaslay�p hangisinin b�y�k hangisinin k���k oldu�unu s�yleyen c program kodu */
#include <stdio.h>

int main(){
	int a, b; 
	printf("iki sayi giriniz: ");
	scanf("%d%d",&a, &b);
	if(a==b) printf("iki sayi birbirine esittir.");
	if (a!=b){
		printf("iki sayi birbirine esit degildir.\n");
		
		if (a<b){
			printf("ilk sayi ikinci sayidan kucuktur.\n", a, b);
		}
		else if(a>b){
			printf("ilk sayi ikinci sayidan buyuktur.\n", a, b);
		}	
	}
	
	// yazd���n�z program� birinci sayinin ikinci sayinin kati olup olmad���n� ekrana bast�racak �ekilde de�i�tirin. 
	// modulo (%) operat�r�n� kullanabilirsiniz.
	if((a%b)==0) printf("ilk sayi ikinci sayinin katidir.");
	else printf("ilk sayi ikinci sayinin kati degildir.");
	
	
	return 0;
}
