#include <stdio.h>
int cevir(int a);
int main(){
 	int sayi, sonuc;
 	printf("4 basamakli bir sayi giriniz: ");
 	scanf("%d", &sayi);
 	sonuc = cevir(sayi);
 	printf("ters sayi= %d\n", sonuc);
	return 0;
}
int cevir(int a){
	int x;
	x=(a%10)*1000;
	a=a/10;
	
	x=(a%10)*100;
	a=a/10;
	
	x=(a%10)*10;
	a=a/10;
	return x;
}
