#include <stdio.h>
/*
kullanýcýdan girmesini istediði a, b, c ve x deðerlerini kullanarak aþaðýdaki aritmetik
iþlemin sonucunu hesaplayan ve ekrana basan c programýný yazýnýz.
									ax^2+bx+x=?									*/
int main(){
	int a,b,c,x,sonuc;
	printf("a, b, c ve x sayilarini giriniz: ");
	scanf("%d%d%d%d", &a, &b, &c, &x);
	sonuc=a*x*x+b*x+c;
	printf("ax^2+bx+c = %d",sonuc);
	
	return 0;
}
