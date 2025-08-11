#include <stdio.h>
//basamaklardaki sayýyý bulma
int main(){
	int sayi, birler_bas, onlar_bas;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	birler_bas = sayi % 10 ;
	onlar_bas = sayi % 100 / 10 ;
	
	printf("Sayinin birler basamagi: %d\n", birler_bas);
	printf("Sayinin onlar basamagi: %d\n", onlar_bas);
	
	return 0;
}
