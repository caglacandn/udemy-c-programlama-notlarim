#include <stdio.h>
//  % : b�l�mden kalan
int main(){
	// b�lme islemi
    /*
	int a,b;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("bolum sonucu: %d ", a/b); // 5/6=0  
	
	*/
	
	/*
	float a,b;
	printf("birinci sayiyi giriniz:");
	scanf("%f",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%f",&b);
	
	printf("bolum sonucu: %.3f ", a/b);  */	
	
	/*
	int a,b;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("bolum sonucu: %.3f ", (float)a/b); // kisa yoldan sonucu float yazd�rma!!!  */
	
	// kalan i�areti
	
	int a,b;
	printf("birinci sayiyi giriniz:");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	printf("bolum sonucundan kalan: %d ", a%b);
	
	return 0;
}
