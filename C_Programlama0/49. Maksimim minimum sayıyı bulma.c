/*
kullýcýdan 3 farklý tam sayý girmesini isteyen, kullanýcýnýn girdiði bu sayýlarý okuyup sayýlarýn en  küçüðünü
ve en büyüðünü ekrana bastýran programýn C kodunu yazýnýz. 		 */ 
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
