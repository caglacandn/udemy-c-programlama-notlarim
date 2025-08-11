// while döngüsü kullanarak verilen sayýyý bir azalttýrarak ekrana yazdýrýn
#include<stdio.h>
int main(){
	int a;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d", &a);
	while(a != 1){
		printf("%2d", a); //%2d 2 boþluk koyar
		a=a-1;
	}
	
	
	return 0;
}
