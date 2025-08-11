#include <stdio.h>

int main(){
	/*
	int a;
	printf("lutfen bir tamsayi giriniz:");
	scanf("%d",&a);
	
	printf("girdiginiz sayi: %d\n", a);
	
	float b;
	printf("lutfen bir ondalik sayi giriniz:");
	scanf("%f",&b);
	
	printf("girdiginiz sayi: %f\n", b); */
	
	char c;
	printf("lutfen bir karakter giriniz:");
	scanf("%c",&c);
	
	printf("girdiginiz karakter: %c\n", c);
	
	char dizi[10];                                      //karakter dizisi: string %s
	printf("Lutfen bir karakter dizisi giriniz:");
	scanf("%s",&dizi);
	
	printf("girdiginiz karakter dizisi: %s\n", dizi);
	
	return 0;
}
