#include <stdio.h>
/*
kullan�c�dan girmesini istedi�i a, b, c ve x de�erlerini kullanarak a�a��daki aritmetik
i�lemin sonucunu hesaplayan ve ekrana basan c program�n� yaz�n�z.
									ax^2+bx+x=?									*/
int main(){
	int a,b,c,x,sonuc;
	printf("a, b, c ve x sayilarini giriniz: ");
	scanf("%d%d%d%d", &a, &b, &c, &x);
	sonuc=a*x*x+b*x+c;
	printf("ax^2+bx+c = %d",sonuc);
	
	return 0;
}
