// while döngüsü ile 0 ile n sayýsý arasýnda yer alan 17nin tüm tam sayý katlarýný ekrana bastýran bir program yazýnýz
#include<stdio.h>
int main(){
	
	int n;
	printf("Lutfen bir ust limit giriniz: ");
	scanf("%d",&n);
	
	int sayi, i=0;
	int satir = 1;
	
	while((i*17)<n){
		sayi = i*17;
		printf("%5d",sayi);
		if (satir%10 == 0){
			printf("\n");
		}
		satir++;
		i++;
	}
	
	return 0;
}
