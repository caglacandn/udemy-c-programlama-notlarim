/*
kull�c�dan 3 farkl� tam say� girmesini isteyen, kullan�c�n�n girdi�i bu say�lar� okuyup say�lar�n en  k�����n�
ve en b�y���n� ekrana bast�ran program�n C kodunu yaz�n�z. 		 */ 
#include <stdio.h>

int main(){
	
	int a, b, c;
	printf("Uc farkli tam sayi giriniz: ");
	scanf("%d%d%d",&a, &b, &c);
	int max=c;
	int min=a;
	if (a>max){
		max = a;
	}
	if (b>max){
		max = b;
	}
	if (b<min){
		min = b;
	}
	if (c<min){
		min = c;
	}
	printf("En kucuk sayi: %d\n", min);
	printf("En buyuk sayi: %d\n", max);
	return 0;
}
