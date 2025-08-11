/* kullanýcýnýn girdiði iki tam sayýyý kýyaslayýp hangisinin büyük hangisinin küçük olduðunu söyleyen c program kodu */
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
	
	// yazdýðýnýz programý birinci sayinin ikinci sayinin kati olup olmadýðýný ekrana bastýracak þekilde deðiþtirin. 
	// modulo (%) operatörünü kullanabilirsiniz.
	if((a%b)==0) printf("ilk sayi ikinci sayinin katidir.");
	else printf("ilk sayi ikinci sayinin kati degildir.");
	
	
	return 0;
}
